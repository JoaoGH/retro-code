//
// Exercício 2: alterar o programa feito no Exercício 1, fazendo com que
// ele verifique se o número digitado está entre 1 e 10; se não estiver,
// exibe uma mensagem de erro e solicita novamente.
//
function main() {
	x = prompt("Entre com um número:");
	while (x < 1  ||  x > 10)
		x = prompt("ERRO! O número deve estar entre 1 e 10.  Tente novamente:");
	for (i = 1; i <= 9; i++) {
		prod = x * i;
		document.write(x + " * " + i + " = " + prod + "<br>");
	}
}
