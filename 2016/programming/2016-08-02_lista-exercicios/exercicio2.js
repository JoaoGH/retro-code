//
// Exemplo 3: Mostra no navegador uma mensagem informada pelo usuário.
//
function main() {
	erro=1;
	while (erro==1){
		x = prompt("Digite um número:");
		if (x<11){		
			for (i=0; i<=10; i++){
				multi=x*i;
				mostrar = i+" x "+x+" = "+multi+"<br>";
				document.write(mostrar);
			}
			erro=0;
		}
		else{
			document.write("<center><h1> Número excessivamente grande.<br> Favor digitar novamente.</center></h1>");
		}
	}
}
