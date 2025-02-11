function enumerarParagrafos() {
	paragrafos = document.getElementsByTagName("p");
	for (i = 0; i < paragrafos.length; i++) {
		p = paragrafos[i];
		original = p.innerHTML;
		p.innerHTML = "(Parágrafo " + i + ") " + original;
	}
}