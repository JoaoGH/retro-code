//
// Exercicio 5: Criar uma página para converter números binários em decimal.
// (É suficiente considerar números binários de 8 dígitos.)
//
function recalcular() {
	d128 = document.getElementById("d128").value;
	d64 = document.getElementById("d64").value;
	d32 = document.getElementById("d32").value;
	d16 = document.getElementById("d16").value;
	d8 = document.getElementById("d8").value;
	d4 = document.getElementById("d4").value;
	d2 = document.getElementById("d2").value;
	d1 = document.getElementById("d1").value;
	resultado = document.getElementById("resultado");
	resultado.innerHTML =
		d128 * 128 +
		d64 * 64 +
		d32 * 32 +
		d16 * 16 +
		d8 * 8 +
		d4 * 4 +
		d2 * 2 +
		d1 * 1;
}