function calcularIMC(){
    var altura = document.imcform.altura.value; // document.imcform vai procurar no formulario a variável altura
    var peso = document.imcform.peso.value; // mesmo que no caso anterior
    var total;

    if((altura == '') || (peso == '')){ // não aceita informações em branco
      alert('Preencha os campos!'); //caso os campos fiquem em branco
      document.imcform.altura.focus; //
    }else{ //
      total = peso / (altura * altura); 
      document.imcform.imc.value = total; 
      if(total <= 18.5){ //
        alert('Você está abaixo do peso '); 
      } else if((total > 18.5) && (total <= 24.9)){ 
        alert('Você está no peso ideal '); //
      } else if((total > 24.9) && (total <= 29.9)){ 
        alert('Você está levemente acima do peso '); 
      } else { //
        alert('Você está acima do peso!'); 
      }
    }
}