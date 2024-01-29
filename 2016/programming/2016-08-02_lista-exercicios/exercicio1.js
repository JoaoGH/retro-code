//
// Exemplo 3: Mostra no navegador uma mensagem informada pelo usuário.
//
function main() {
	x = prompt("Digite um número:");
	for (i=0; i<=10; i++){
		multi=x*i;
		mostrar = i+" x "+x+" = "+multi+"<br>";
		document.write(mostrar);
	} 
}
