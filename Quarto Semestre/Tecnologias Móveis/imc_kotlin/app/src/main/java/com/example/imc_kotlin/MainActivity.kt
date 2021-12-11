package com.example.imc_kotlin

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.TextView
import android.widget.Toast

class MainActivity : AppCompatActivity() {

    private var txtHeight: TextView? = null
    private var txtWeight: TextView? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val btnCalculate = findViewById<Button>(R.id.btnCalculate)
        val btnClear = findViewById<Button>(R.id.btnClear)

        this.txtHeight = findViewById(R.id.txtHeight)
        this.txtWeight = findViewById(R.id.txtWeight)

        btnCalculate.setOnClickListener {
            val height = txtHeight?.text.toString()
            val weight = txtWeight?.text.toString()

            //Verifica se os campos não são nulos
            if (height.isEmpty() || weight.isEmpty()) {
                Toast.makeText(this, "Preencha corretamente os campos", Toast.LENGTH_SHORT)
                    .show()
                return@setOnClickListener
            }

            // Instancia a classe IMC e chama os métodos Calculate e Classification no Construtor
            val imc = IMC(height.toDouble(), weight.toDouble())

            val intent = Intent(this, ResultActivity::class.java)
            intent.putExtra(ResultActivity.IMC_RESULT, imc.result)
            intent.putExtra(ResultActivity.IMC_CLASSIFICATION, imc.classification)
            intent.putExtra(ResultActivity.IMC_OBESITY, imc.obesity)
            intent.putExtra(ResultActivity.IMC_IMG, imc.img)
            startActivity(intent)
        }

        btnClear.setOnClickListener {
            txtHeight?.text = ""
            txtWeight?.text = ""
        }
    }

    override fun onSaveInstanceState(outState: Bundle) {
        super.onSaveInstanceState(outState)
        outState.putCharSequence("HEIGHT", this.txtHeight?.text)
        outState.putCharSequence("WEIGHT", this.txtWeight?.text)
    }

    override fun onRestoreInstanceState(savedInstanceState: Bundle) {
        super.onRestoreInstanceState(savedInstanceState)
        this.txtHeight?.text = savedInstanceState.getCharSequence("HEIGHT")
        this.txtWeight?.text = savedInstanceState.getCharSequence("WEIGHT")
    }
}
