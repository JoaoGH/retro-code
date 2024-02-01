//
// Exemplo 5: uso da classe Math.
//
function main() {
	// sorteia um número entre 0 e 0.999999999999
	x = Math.random();
	document.write("O número sorteado é " + x + ".<br>");
	
	// transformando em um número inteiro entre 0 e 99
	y = Math.floor(100 * x);
	document.write("O número multiplicado por cem e truncado fica " + y + ".");
}
