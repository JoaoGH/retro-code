#include <iostream>
using namespace std;
int idade, d_vida;
string nome, opc;
int main()
{opc="S";
	while((opc=="S")or(opc=="s"))
	{
		system ("cls");
		cout<<"Informe seu nome: ";
		cin>>nome;
		cout<<"Informe quantos tens: ";
		cin>>idade;
		d_vida=idade*365;
		cout<<"Uau "<<nome<<", voce ja viveu +/-: "<<d_vida<<" dias, mas ainda tens muita coisa pela frente!! "<<'\n';
		cout<<"Executar novamente? S ou N ";
		cin>>opc;
	}	
	return 0;
}

