#include <iostream>
using namespace std;
string opc;
float alcool, gasolina, vantagem;
int main()
{
	opc = "S";
	while((opc=="S") or (opc=="s"))
	{
		cout<<"Informe o valor do litro de alcool: ";
		cin>>alcool;
		cout<<"Informe o valor do litro de gasolina: ";
		cin>>gasolina;
		vantagem=alcool/gasolina;
		if(vantagem<=0.7)
		{
			cout<<"E mais vantajoso abastecer com alcool."<<'\n';
		}
		else
		{
			cout<<"E mais vantajoso abstecer com gasolina."<<'\n';
		}
		cout<<"Continuar? S p/ sim ou N p/ nao: ";
		cin>>opc;
	}
}
