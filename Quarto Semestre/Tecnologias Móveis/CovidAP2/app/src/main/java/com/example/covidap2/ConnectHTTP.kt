package com.example.covidap2

import android.content.Context
import android.net.ConnectivityManager
import android.os.Build
import android.util.Log
import androidx.annotation.RequiresApi
import org.json.JSONArray
import java.io.ByteArrayOutputStream
import java.io.IOException
import java.io.InputStream
import java.lang.Exception
import java.net.HttpURLConnection
import java.net.URL
import java.nio.charset.Charset
import java.time.LocalDate
import java.time.format.DateTimeFormatter

object ConnectHttp {
    val Json_URL="https://raw.githubusercontent.com/pedrotasign/json-covid/main/data.json"
    private fun connect(urlAdrress: String): HttpURLConnection{
        val second =1000
        val url= URL(urlAdrress)
        val connection = (url.openConnection() as HttpURLConnection).apply {
            readTimeout= 10 * second
            connectTimeout = 15 * second
            requestMethod = "GET"
            doInput= true
            doOutput =false
        }
        connection.connect()
        return connection
    }
    fun hasConnection(ctx: Context): Boolean{
        val cm= ctx.getSystemService(Context.CONNECTIVITY_SERVICE) as ConnectivityManager
        val info = cm.activeNetworkInfo
        return info !=null && info.isConnected
    }

    @RequiresApi(Build.VERSION_CODES.O)
    fun readBoletins(json: JSONArray): List<Boletim>{
        val boletins = mutableListOf<Boletim>()
        try {
            for (i in 0 .. json.length() -1){
                var js = json.getJSONObject(i)
                val dia = formatarData(js.getString("boletim").substring(0,10))
                val hora = js.getString("boletim").substring(11,16)
                val boletim = Boletim(js.getInt("Suspeitos"),
                    js.getInt("Confirmados"),
                    js.getInt("Descartados"),
                    js.getInt("Monitoramento"),
                    js.getInt("Descartados"),
                    js.getInt("Sdomiciliar"),
                    js.getInt("Shopitalar"),
                    js.getInt("mortes"),dia,hora)

                boletins.add(boletim)
            }
        }
        catch (e : IOException){
            Log.e("Erro", "Não foi possível ler o arquivo JSON")
        }
        return boletins
    }
    @RequiresApi(Build.VERSION_CODES.O)
    fun formatarData(data: String): String {
        val diaString =data
        var formatter = DateTimeFormatter.ofPattern("dd/MM/yyyy")
        var date = LocalDate.parse(diaString)
        var formattedDate = date.format(formatter)
        return formattedDate
    }


    @RequiresApi(Build.VERSION_CODES.O)
    fun loadBoletim(): List<Boletim>?{
        try {
            val connection = connect(Json_URL)
            val responseCode = connection.responseCode
            if (responseCode==HttpURLConnection.HTTP_OK){
                val inputStream = connection.inputStream
                val jsonString=streamToString(inputStream)
                val json = JSONArray(jsonString)
                return readBoletins(json)
            }
        }catch (e: Exception){
            e.message?.let { Log.e("ERRO", it) }
            e.printStackTrace()
        }
        return null
    }
    private fun streamToString(inputStream: InputStream):String{
        val buffer =ByteArray(1024)
        val bigBuffer = ByteArrayOutputStream()
        var bytesRead: Int
        while (true){
            bytesRead = inputStream.read(buffer)
            if (bytesRead == -1) break
            bigBuffer.write(buffer,0,bytesRead)
        }
        return String(bigBuffer.toByteArray(), Charset.forName("UTF-8"))
    }
}