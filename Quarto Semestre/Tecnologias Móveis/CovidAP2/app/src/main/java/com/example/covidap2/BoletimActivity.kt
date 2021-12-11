package com.example.covidap2

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.activity_boletim.*


class BoletimActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_boletim)
        val actionbar = supportActionBar

        actionbar!!.title = "Boletim Arroio do Sal"

        actionbar.setDisplayHomeAsUpEnabled(true)
        actionbar.setDisplayHomeAsUpEnabled(true)

        val confirmados = intent.getStringExtra("Confirmados")
        val data = intent.getStringExtra("Data")
        val descartados = intent.getStringExtra("Descartados")
        val suspeitos = intent.getStringExtra("Suspeitos")
        val curados = intent.getStringExtra("Curados")
        val monitoramento = intent.getStringExtra("Monitoramento")
        val sDomiciliar = intent.getStringExtra("Sdomiciliar")
        val shospitalar = intent.getStringExtra("Shospitalar")
        val mortes = intent.getStringExtra("mortes")
        txtdata.text = "$data"
        text_confirmados.text = "$confirmados"
        txt_descartados.text = "$descartados"
        txt_Suspeitos.text = "$suspeitos"
        txt_curados.text = "$curados"
        txt_monitorados.text = "$monitoramento"
        txt_iso_domiciliar.text = "$sDomiciliar"
        txt_iso_hospitalar.text = "$shospitalar"
        if (mortes != null) {
            if (mortes.toInt() >= 1) {
                txt_mortes.text = "$mortes"
                textView14.text = "MORTES"
            }
        }
    }

    override fun onSupportNavigateUp(): Boolean {
        onBackPressed()
        return true
    }
}

