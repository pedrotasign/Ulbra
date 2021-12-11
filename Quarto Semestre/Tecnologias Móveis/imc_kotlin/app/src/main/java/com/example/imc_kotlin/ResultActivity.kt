package com.example.imc_kotlin

import android.annotation.SuppressLint
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.MenuItem
import android.widget.ImageView
import android.widget.TextView
import java.util.*

class ResultActivity : AppCompatActivity() {

    companion object{
        const val IMC_RESULT = "imc"
        const val IMC_CLASSIFICATION = "classification"
        const val IMC_OBESITY = "obesity"
        const val IMC_IMG = "image"
    }

    @SuppressLint("SetTextI18n")
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_result)

        // Cria a página com os dados
        val result = intent.getDoubleExtra(IMC_RESULT, -1.0)
        val classification = intent.getStringExtra(IMC_CLASSIFICATION)
        val obesity = intent.getStringExtra(IMC_OBESITY)
        val img = intent.getIntExtra(IMC_IMG, -1)

        val txtResult = findViewById<TextView>(R.id.txtResult)
        val imgResult = findViewById<ImageView>(R.id.imgResult)

        txtResult.text = "IMC ATUAL: ${"%.2f".format(result)} \n"
        imgResult.contentDescription = classification
        imgResult.setImageResource(img)

        supportActionBar?.setDisplayHomeAsUpEnabled(true)
    }

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        if (item.itemId == android.R.id.home) {
            finish()
            return true
        }
        return super.onOptionsItemSelected(item)
    }
}
