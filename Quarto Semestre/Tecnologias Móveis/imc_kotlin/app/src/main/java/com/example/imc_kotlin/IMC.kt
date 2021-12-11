package com.example.imc_kotlin

import kotlin.math.pow

class IMC (var height: Double, var weight: Double) {

    var result: Double = 0.00
    var classification: String = ""
    var obesity: String = ""
    var img: Int = 0

    init {
        this.calculate()
        this.setClassificationAndObesity()
    }

    fun calculate() {
        this.result = weight / height.pow(2.0)
    }

    fun setClassificationAndObesity() {
        if (result < 18.5) {

            classification = IMCClassification.MAGREZA.classification
            obesity = IMCClassification.MAGREZA.obesity
            img = IMCClassification.MAGREZA.img

        } else if (result > 18.5 && result <= 24.9) {

            classification = IMCClassification.NORMAL.classification
            obesity = IMCClassification.NORMAL.obesity
            img = IMCClassification.NORMAL.img

        } else if (result > 24.9 && result <= 29.9) {

            classification = IMCClassification.SOBREPESO.classification
            obesity = IMCClassification.SOBREPESO.obesity
            img = IMCClassification.SOBREPESO.img

        } else if (result > 29.9 && result <= 34.9) {

            classification = IMCClassification.OBESIDADE.classification
            obesity = IMCClassification.OBESIDADE.obesity
            img = IMCClassification.OBESIDADE.img

        } else if (result > 34.9 && result <= 39.9) {

            classification = IMCClassification.OBESIDADE_2.classification
            obesity = IMCClassification.OBESIDADE_2.obesity
            img = IMCClassification.OBESIDADE_2.img

        } else {

            classification = IMCClassification.OBESIDADE_GRAVE.classification
            obesity = IMCClassification.OBESIDADE_GRAVE.obesity
            img = IMCClassification.OBESIDADE_GRAVE.img

        }
    }
}