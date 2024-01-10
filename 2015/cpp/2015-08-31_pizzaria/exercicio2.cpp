#include <iostream>
#include <fstream>
using namespace std;
string nome, sabor;
float preco;
const float atum=68, calabreza=60, milho=40, presunto=35;
int menu;
int main()
{
	cout<<"Informe o nome do cliente: ";
	cin>>nome;
	cout<<"Digite o codigo equivalente ao sabor de pizza desejado:\n 1-Atum\n 2-Calabreza\n 3-Milho\n 4-Presunto\n ";
	cin>>menu;
	switch (menu)
	{
	case 1:
		cout<<"Cliente: "<<nome<<'\n';
		cout<<"Comprou a pizza de sabor: Atum "<<'\n';
		cout<<"No valor de: R$ "<<atum<<'\n';
		sabor="Atum";
		preco=atum;
		break;
	case 2:
		cout<<"Cliente: "<<nome<<'\n';
		cout<<"Comprou a pizza de sabor: Calabreza "<<'\n';
		cout<<"No valor de: R$ "<<calabreza<<'\n';
		sabor="Calabreza";
		preco=calabreza;
		break;
	case 3:
		cout<<"Cliente: "<<nome<<'\n';
		cout<<"Comprou a pizza de sabor: Milho "<<'\n';
		cout<<"No valor de: R$ "<<milho<<'\n';
		sabor="Milho";
		preco=milho;
		break;
	case 4:
		cout<<"Cliente: "<<nome<<'\n';
		cout<<"Comprou a pizza de sabor: Presunto "<<'\n';
		cout<<"No valor de: R$ "<<presunto<<'\n';
		sabor="Preunto";
		preco=presunto;
		break;
	default:
		cout<<"Codigo Invalido..."<<'\n';	
	}
	ofstream gravar;
	gravar.open("Manus.txt", ofstream::app);
	gravar<<"Cliente: "<<nome<<'\n';
	gravar<<"Sabor da pizza: "<<sabor<<'\n';
	gravar<<"Preco: "<<preco<<'\n';
	gravar<<"-------------------------------\n";
	gravar.close();
	system ("PAUSE>>null");
	return 0;
}

