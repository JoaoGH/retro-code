#include <iostream>
using namespace std;
int qtdp, qtdm, qtdg, valor;
string opc;
const int p=10, m=12, g=15;
int main ()
{
	opc="S";
	while ((opc=="S")or(opc=="s"))
	{	
		system("cls");
		cout<<"Informe quantas camisetas P vai comprar: ";
		cin>>qtdp;
		cout<<"Informe quantas camisetas M vai comprar: ";
		cin>>qtdm;
		cout<<"Informe quantas camisetas G vai comprar: ";
		cin>>qtdg;
		valor=qtdp*p+qtdm*m+qtdg*g;
		system ("cls");
		system ("PAUSE>>null");
		cout<<"Valor final: R$ "<<valor<<'\n';
		cout<<"Exucatr novamente? S ou N ";
		cin>>opc;
	}
}
