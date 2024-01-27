function enviar() {
	var msg = document.getElementById("msg").value;

	var ajax = new XMLHttpRequest();
	var url = "ajax_com_get.php?msg=" + msg;
	ajax.open("GET", url, false);
	ajax.send();

	var objSaida = document.getElementById("saida");
	objSaida.innerHTML = ajax.responseText;
}