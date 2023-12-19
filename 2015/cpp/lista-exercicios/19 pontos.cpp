#include <iostream>
using namespace std;
string opc;
float compras, v, v1, v2, v3, v4, pontos;
int main ()
{
	opc="s";
	while ((opc=="S")or(opc=="s"))
	{
		system("cls");
		cout<<"Informe o valor da primeira compra: R$ ";
		cin>>v1;
		cout<<"Informe o valor da segunda compra: R$ ";
		cin>>v2;
		cout<<"Informe o valor da terceira compra: R$ ";
		cin>>v3;
		cout<<"Informe o valor da quarta compra: R$ ";
		cin>>v4;
		system("cls");
		cout<<fixed;
		cout.precision(2);
		v=v1+v2+v3+v4;
		pontos=v/5;
		cout<<"Pontos acumulados: "<<pontos<<'\n';
		cout<<"Executar novamente? S ou N ";
		cin>>opc;
	}
}
