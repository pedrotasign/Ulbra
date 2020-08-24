var text = document.getElementById('home').textContent;
document.getElementById('view').innerHTML = text;

    
function onClick(template) {
    var text = document.getElementById(template).textContent;
    document.getElementById('view').innerHTML = text;
}
 