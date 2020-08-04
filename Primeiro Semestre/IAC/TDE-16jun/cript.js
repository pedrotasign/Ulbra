var a = true;
var b = true;

var s = !a;
console.log("negando a " + s);

var s = a && b;
console.log(" a AND b " + s);

if(a && b){
    console.log("passou no este do end");
}else{
    console.log("errou");
}

var s = a || b;
console.log(" a OR b " + s);

var s = a != b;
console.log("a xor b (2) " + s);

var s = (a || b) && !(a && b);
console.log("a xor b (3) " + s);

var s = a ^ b;
console.log("a xor b e s é do tipo " + typeof(s) + " - convertendo para bool fica " + Boolean(s));


var temperatura = 20;

if(temperatura>=10 || temperatura <=15){
    console.log("temperatura de boas pro gaudério");
}else if(temperatura>=16 && temperatura<=30){
    console.log("ta quentinho");
}
else{
    console.log("da pra tomar banho na rua ainda sendo gaudério");
}

function pegarVariavel(){
    var variavel = document.getElementById('variavel').value;
    console.log(variavel);
    document.getElementById('result').innerHTML = "o conteudo é " + variavel;


}