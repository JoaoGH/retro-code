function mostrarTitulo() {
	msg="O titulo desta pagina e: " + document.title;
        msg1="Tamanho de: " + window.outerHeight+" px por: "+ window.outerWidth + " px";
        msg2="Serio que voce esta usando: " + navigator.appName +" versao: "+ navigator.appVersion;
        alert(msg+'\n'+msg1+'\n'+msg2);
}