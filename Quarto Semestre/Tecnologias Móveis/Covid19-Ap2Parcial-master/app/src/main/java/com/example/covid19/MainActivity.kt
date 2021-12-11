package com.example.covid19

import android.content.Context
import android.os.Build
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.widget.ArrayAdapter
import androidx.annotation.RequiresApi
import kotlinx.android.synthetic.main.activity_main.*
import org.json.JSONArray
import org.json.JSONObject
import java.io.IOException
import java.io.InputStream
import java.text.SimpleDateFormat
import java.time.LocalDate
import java.time.format.DateTimeFormatter
import java.util.*

class MainActivity : AppCompatActivity() {

  var lista = arrayListOf<String>()
  override fun onCreate(savedInstanceState: Bundle?) {
    super.onCreate(savedInstanceState)
    setContentView(R.layout.activity_main)
    readJson(this)

    var adapter = ArrayAdapter(this, android.R.layout.simple_list_item_1,lista)
    lista_view.adapter= adapter
  }


  fun readJson(context: Context){
    var json: String?=null
    val listaBoletins = mutableListOf<Boletim>()
    try {
      val inputStream: InputStream= context.assets.open("data.json")
      json = inputStream.bufferedReader().use { it.readText() }
     // txtValue.text=json.toString()
      var jsonArray =JSONArray(json)
      for (i in 0 .. jsonArray.length()-1){
        var js = jsonArray.getJSONObject(i)
        val dia = formatarData(js.getString("boletim").substring(0,10))
        lista.add(dia)
      }
    }
    catch (e : IOException){
    Log.e("Erro", "Impossivel ler JSON")
    }

  }
  fun formatarData(data: String): String {
    val diaString =data
    var formatter = DateTimeFormatter.ofPattern("dd/MM/yyyy")
    var date = LocalDate.parse(diaString)
    var formattedDate = date.format(formatter)
    return formattedDate
  }

}
