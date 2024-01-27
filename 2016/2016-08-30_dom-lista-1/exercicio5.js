function enumerarParagrafos() {
    paragrafos = document.getElementsByTagName("p");
    ultimo = paragrafos.length;
    //paragrafos.length pega o tamanho da array, enquanto ele for maior que o i
    //i salta sempre dois numeros para ser somente os pares a serem enumerados
    //paragrafos.length-1 é para o ultimo não paragrafo par nao ser enumerado
    for (i = 0; i < (paragrafos.length - 1); i += 2) {
        p = paragrafos[i];
        paragrafo_inicio = p.innerHTML;
        p.innerHTML = "(Paragrafo " + i + ") " + paragrafo_inicio;
    }
}