#include <iostream>
using namespace std;
float a, b, hd;
string opc;
int main()
{
	opc="S";
	while((opc=="s")or(opc=="S"))
	{
		system ("cls");
		cout<<"Informe o valor que deseja declarar para A: ";
		cin>>a;
		cout<<"Informe o valor que deseja declarar para B: ";
		cin>>b;
		system ("cls");
		cout<<"O valor de A e: "<<b<<'\n';
		cout<<"O valor de B e: "<<a<<'\n';
		cout<<"Executar d novo? S ou N ";
		cin>>opc;
	}
	return 0;
}
