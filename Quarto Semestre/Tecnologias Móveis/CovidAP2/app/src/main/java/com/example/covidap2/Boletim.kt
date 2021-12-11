package com.example.covidap2

import android.os.Build
import androidx.annotation.RequiresApi
import java.time.LocalDate
import java.time.format.DateTimeFormatter

class Boletim(
    var suspeitos: Int = 0,
    var confirmados: Int = 0,
    var descartados: Int = 0,
    var monitoramento: Int = 0,
    var curados: Int = 0,
    var sDomiciliar: Int = 0,
    var sHospitalar: Int = 0,
    var mortes: Int = 0,
    var data: String,
    var hora: String
) {
    override fun toString(): String {
        return data
    }


    @RequiresApi(Build.VERSION_CODES.O)
    fun getData(data: String): String {
        val diaString = data
        var formatter = DateTimeFormatter.ofPattern("dd/MM/yyyy")
        var date = LocalDate.parse(diaString)
        var formattedDate = date.format(formatter)
        return formattedDate
    }

}
