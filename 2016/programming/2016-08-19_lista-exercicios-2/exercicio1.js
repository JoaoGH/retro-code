//
// Exercício 1: implementar um programa que solicita ao usuário um número e
// gera a tabuada desse número.
//
function main() {
	x = prompt("Entre com um número:");
	for (i = 1; i <= 9; i++) {
		prod = x * i;
		document.write(x + " * " + i + " = " + prod + "<br>");
	}
}
