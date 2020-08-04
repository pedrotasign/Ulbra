function calcular(){
    var quant = document.getElementById('quant');
    var valorUnit = document.getElementById('valorUnit');
    var form = document.form;
    var display = document.getElementById("display");
    var result = 0;

    if (quant.value.length == "" || valorUnit.value.length == "") 
        return display.textContent = "Preencha os campos";

    console.log (quant);
    console.log (valorUnit);

    // if(quant<=100){
    //   result = parseInt(quant)*parseFloat(valorUnit);
    //     console.log (result);  
    // }
    // else{
    //     if(quant>100 && quant<=200){
    //         result = parseInt(quant)*(parseFloat(valorUnit)*0.25);
    //     }

    // }
    // else{
    //     result = parseInt(quant)*(parseFloat(valorUnit)+(parseFloat(valorunit)*0.5));
    // }

    quantValor = parseInt(quant.value)
    valorUnitValor = parseFloat(valorUnit.value)

    if(quantValor>100 && quantValor<=200){
        result = (quantValor* valorUnitValor)*1.25;
        console.log("entrou no 25%");   
    }
    else if(quantValor>200){
        result = (quantValor* valorUnitValor)*1.5;
        console.log("entrou no 50%");
        }    
    else{
        result = quantValor* valorUnitValor;
        console.log("entrou normal");
    }

    quant.value = "";
    valorUnit.value = "";
    quant.focus();

    // toLocaleString converte a string para o formato de moeda brasileira
    display.innerHTML= result.toLocaleString('pt-BR', {style: "currency", currency: "BRL"});

}