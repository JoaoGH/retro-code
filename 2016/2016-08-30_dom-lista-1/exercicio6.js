var fonte;
var pegarclasstexto;
function tamanho() {
    pegarclasstexto = document.getElementsByClassName("texto");
    fonte = parseInt(window.getComputedStyle(pegarclasstexto[0]).fontSize);
}
function aumenta() {
    //pegarclasstexto = document.getElementsByClassName("texto");
    if (fonte < 100) {
        fonte++;
        for (i = 0; i < pegarclasstexto.length; i++) {
            pegarclasstexto[i].style.fontSize = fonte + "px";
        }
    }
}
function diminui() {
    //pegarclasstexto = document.getElementsByClassName("texto");
    if (fonte > 1) {
        fonte--;
        for (i = 0; i < pegarclasstexto.length; i++) {
            pegarclasstexto[i].style.fontSize = fonte + "px";
        }
    }
}