#include <iostream>
using namespace std;
string opc;
float frangos, gasto;
const float chip=4, anel=3.5;
int main()
{opc="s";
	while((opc=="S")or(opc=="s"))
	{
		system("cls");
		cout<<"Informe quantos frangos a granja vai marcar: ";
		cin>>frangos;
		cout<<fixed;
		cout.precision(2);
		system("cls");
		gasto= (frangos*chip)+(anel*2);
		cout<<"O gasto total sera: R$"<<gasto<<'\n';
		cout<<"Executar novamente? S ou N ";
		cin>>opc;
	}
}
