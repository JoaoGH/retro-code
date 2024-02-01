function enviar() {
	var msg = document.getElementById("msg").value;

	var ajax = new XMLHttpRequest();
	var url = "ajax_com_post.php";
	ajax.open("POST", url, false);
	ajax.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	ajax.send("msg=" + msg);

	var objSaida = document.getElementById("saida");
	objSaida.innerHTML = ajax.responseText;
}