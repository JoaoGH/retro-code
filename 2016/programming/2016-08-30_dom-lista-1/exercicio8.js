function filhos(){
    elemento = document.getElementById("conteudo");
    filhotes = elemento.children.length;
    for ( i = 0; i < filhotes; i++) {
        troca=elemento.children[i];
        cor=troca.style.color="green";
    }
}