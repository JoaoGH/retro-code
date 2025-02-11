//
// Criar uma página com controles do tipo "radio" simulando uma pesquisa de opinião:
// "Quantos alunos do 2o ano serão aprovados para o 3o ano?
// ( ) Nenhum
// ( ) Alguns
// ( ) Muitos
// ( ) Todos
// ( ) Nem sim nem não, muito antes pelo contrário"
// Ao clicar Enviar, a página deve mostrar uma mensagem indicando qual foi a opção selecionada.
// Dica: defina o atributo "name" com o mesmo valor em todos os radios, e depois 
//       use o método document.getElementsByName para obter um array com todos eles -
//       fica mais fácil de consultar o estado de cada um.
//
function mostrar_resultado() {
	// obtém um array com os vários "radios"
	radios = document.getElementsByName("pesquisa");

	// percorre todos os itens para localizar qual deles está marcado
	for (i = 0; i < radios.length; i++)
		if (radios[i].checked) {
			if (i == 0)
				msg = "Pessoa de pouca fé!";
			else if (i == 1)
				msg = "Você é meio pessimista...";
			else if (i == 2)
				msg = "Por que não todos? Pelo menos em Linguagem de Programação I...";
			else if (i == 3)
				msg = "Aeeeeeeeeee";
			else
				msg = "WTF??";
			break; // encerra o laço for, pois não precisa verificar o resto
		}
	document.write(msg);
}