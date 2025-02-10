function mostrar(valor) {
    chama_textarea = document.getElementById("saida");
    dentro_textarea = chama_textarea.value ;
    chama_textarea.value= dentro_textarea+""+valor;
}