#include <iostream>
using namespace std;
float gas, prec, litros;
string opc;
int main()
{
	opc="S";
	while((opc=="S")or(opc=="s"))
	{	
		system("cls");
		cout<<"Informe o preco da gasolina: R$ ";
		cin>>prec;
		cout<<"Informe quanto o motorista vai colocar de gasolina: R$ ";
		cin>>gas;
		cout<<fixed;
		cout.precision(2);
		litros=gas/prec;
		system ("cls");
		system ("PAUSE>>null");
		cout<<"Foram abastecios "<<litros<<" litros"<<'\n';
		cout<<"Executar novamente? S ou N ";
		cin>>opc;
	}
}
