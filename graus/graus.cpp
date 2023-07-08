#include <iostream>
using namespace std;
float f, c;
string opc;
int main ()
{
	opc="S";
	while((opc=="S")or(opc=="s"))
	{
		cout<<"Informe a temperatura em Grau F ";
		cin>>f;
		c=(f-32)*5/9;
		system ("cls");
		cout << fixed;
		cout.precision(2);
		cout<<"Graus em F: "<<f<<'\n';
		cout<<"E igual a: "<<c<<" em Celsius"<<'\n';
		cout<<"Continuar? S ou N ";
		cin>>opc;
	}
}
