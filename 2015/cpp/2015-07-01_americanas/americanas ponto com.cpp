#include <iostream>
#include <fstream>
using namespace std;
const float mochila= 250, caderno= 15, caneta= 1.8, lapis= 1.3, borracha= 1;
string nome, opc, sair, txt;
int menu, qtd_mochila, qtd_caderno, qtd_caneta, qtd_lapis, qtd_borracha, qtd_total, reset, carrinho1, carrinho2, carrinho3, carrinho4, carrinho5;
float valor_total, sub_total, valor_mochila, valor_caderno, valor_caneta, valor_lapis, valor_borracha, abc;
int main()
{
	reset=0;
	opc= "S";
	while (opc == "S" or opc == "s")
	{
		cout << "Informe nome do cliente: ";
		cin >> nome;
		sair = "S";
		while ((sair == "S") or ( sair == "s"))
		{
			system("cls");
			cout << "Digite o codigo do produto: \n1 - Mochila \n2 - Caderno \n3 - Caneta \n4 - Lapis \n5 - Borracha \n ";
			cin >> menu;
			switch (menu)
			{
				case 1:
					cout << "\nSelecionou: Mochila ";
					cout << "\nInforme a quantidade de mochila que deseja comprar: ";
					cin >> qtd_mochila;
					carrinho1=carrinho1+qtd_mochila;
					system ("cls");
					break;
				case 2:
					cout << "\nSelecionou: Caderno ";
					cout << "\nInforme a quantidade de cadernos que voce deseja comprar: ";
					cin >> qtd_caderno;
					carrinho2=carrinho2+qtd_caderno;
					system("cls");
					break;
				case 3:
					cout << "\nSelecionou: Caneta ";
					cout << "\nInforme quantidade de canetas que deseja comprar: ";
					cin >> qtd_caneta;
					carrinho3=carrinho3+qtd_caderno;
					system("cls");
					break;
				case 4:
					cout << "\nSelecionado: Lapis ";
					cout << "\nInforme a quantidade de lapis que deseja comprar: ";
					cin >> qtd_lapis;
					carrinho4=carrinho4+qtd_lapis;
					system("cls");
					break;
				case 5:
					cout << "\nSelecionado: Borracha ";
					cout << "\nInforme a quantidade de borrachas que deseja comprar: ";
					cin >> qtd_borracha;
					carrinho5=carrinho5+qtd_borracha;
					system("cls");
					break;
				default:
					cout << "\nDigito Invalido ";
					system("cls");							
	 		}
			cout << "\nDeseja continuar comprando (S/N): ";
			cin >> sair;
			}	
	system("cls");
	valor_mochila= mochila*carrinho1;
	valor_caderno= caderno*carrinho2;
	valor_caneta= caneta*carrinho3;
	valor_lapis= lapis*carrinho4;
	valor_borracha= borracha*carrinho5;
	qtd_total= carrinho1+carrinho2+carrinho3+carrinho4+carrinho5;
	valor_total= valor_mochila+valor_caderno+valor_caneta+valor_lapis+valor_borracha;
	cout << "\nQuantidade de mochilas compradas: " << carrinho1 << " cada uma no valor de R$" << mochila;
	cout << "\nQuantidade de cadernos comprados: " << carrinho2 << " cada um no valor de R$" <<caderno;
	cout << "\nQuantidade de canetas compradas: " << carrinho3 << " cada uma no valor de R$" << caneta;
	cout << "\nQuantidade de lapis comprados: " << carrinho4 << " cada um no valor de R$" << lapis;
	cout << "\nQuantidade de borracha compradas: " << carrinho5 << " cada uma no valor de R$" << borracha;
	cout << "\nTotal de dinheiro gasto em mochilas: R$" << valor_mochila;
	cout << "\nTotal de dinheiro gasto em cadernos: R$" << valor_caderno;
	cout << "\nTotal de dinheiro gasto em canetas: R$" << valor_caneta;
	cout << "\nTotal de dinheiro gasto em lapis: R$" << valor_lapis;
	cout << "\nTotal de dinheiro gasto em borrachas: R$" << valor_borracha;
	cout << "\nTotal de itens comprados: " << qtd_total;
	cout << "\nValor total gasto: R$" << valor_total;
	cout << "\nObrigado por comprar nas americanas ponto com ";
	cout << "\n\n!!Fim do programa!! ";
	txt=nome;
	abc=valor_total;
	ofstream escreve;
	escreve.open("Americanas ponto com.txt");
	escreve<<"O cliente "<<txt<<" gastou R$: "<<abc;
	cout << "\nDeseja executar novamente (S/N): ";
	cin >> opc;
	system("cls"); 	
}
}
