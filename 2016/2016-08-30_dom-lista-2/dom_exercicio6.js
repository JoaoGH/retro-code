var i = 1;
var valorfinal = 30;
function aumentar() {
    var pegarelementos = document.getElementById("texto");
    var numeroelementos = pegarelementos.children.length;
    for (j = 0; j < numeroelementos; j++) {
        transformarparaint = parseInt(valorfinal);
        var aumentartamanhofuncao = transformarparaint;
        aumentartamanhofuncao = aumentartamanhofuncao + i;
        aumentartamanhofuncao = aumentartamanhofuncao.toString();
        pegarcadaelemento = pegarelementos.children[j];
        aumentarfont = pegarcadaelemento.style.fontSize = aumentartamanhofuncao + "px";
    }
    valorfinal = aumentartamanhofuncao;
}
function diminuir() {
    var pegarelementos = document.getElementById("texto");
    var numeroelementos = pegarelementos.children.length;
    for (j = 0; j < numeroelementos; j++) {
        transformarparaint = parseInt(valorfinal);
        var diminuirtamanhofuncao = transformarparaint;
        diminuirtamanhofuncao = diminuirtamanhofuncao - i;
        diminuirtamanhofuncao = diminuirtamanhofuncao.toString();
        pegarcadaelemento = pegarelementos.children[j];
        diminuirfont = pegarcadaelemento.style.fontSize = diminuirtamanhofuncao + "px";

    }
    valorfinal = diminuirtamanhofuncao;
    acao = "diminuir";
}


