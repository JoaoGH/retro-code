function destacar() {
    paragrafos = document.getElementsByTagName("p");
    //tipo = document.getElementsByTagName("p.destaque");
    for (i = 0; i < paragrafos.length; i++) {
        trocar = paragrafos[i];
	trocar.style.display = "p.destaque";
    }
}