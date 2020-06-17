function calcular(){
    var n1 = document.getElementById("txtNumUm").value;
    var n2 = document.getElementById("txtNumDois").value;
    var oper = document.getElementById("operacao").value;
    var resultadoFinal = document.getElementById('resultadoFinal');
    var resultado = 0;
 
    if(n1.length=='' | n2.length==''){
       alert('Número Invalido');
       return;
    }
 
    switch( oper){
       case '+': 
          resultado = parseInt(n1) + parseInt(n2);
          break;
       
       case '-': 
          resultado = parseInt(n1) - parseInt(n2);
          break;
 
       case '/': 
          resultado = parseInt(n1) / parseInt(n2);
          break;
 
       case '*': 
          resultado = parseInt(n1) * parseInt(n2);
          break;
 
    }
    resultadoFinal.innerHTML = resultado;
 
 }  