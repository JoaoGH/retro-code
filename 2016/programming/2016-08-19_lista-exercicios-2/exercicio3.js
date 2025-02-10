//
// Exercício 3: implemente um jogo de adivinhação de números.  O programa deve sortear um número inteiro entre 1 e 100 e o usuário deve tentar adivinhá-lo.  A cada tentativa, o programa deve informar se o usuário acertou, ou então se o número sorteado é menor ou maior do que a tentativa feita.  Ao final, o programa deve mostrar o número de tentativas realizadas.
//
function main() {
	x = Math.floor(100 * Math.random()) + 1;
	i = 1;
	t = prompt("Entre com um numero entre 1 e 100:");
	while (t != x) {
		if (t < x)
			t = prompt("E maior.  Tente novamente:");
		else
			t = prompt("E menor.  Tente novamente:");
		i++;
	}
	document.write("PARABENS, voce acertou em apenas " + i + " tentativas!");
}
