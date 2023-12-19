#include <iostream>
using namespace std;
float kw;
string nome;
int menu;
const float residencial=0.48, comercial=0.60, industrial=1.25;
float calcular (float x, const float y)
{cout<<fixed; cout.precision(2);
	return (x*y);
}
int main()
{
	cout<<"Informe o nome do cliente: "; cin>>nome; cout<<"\n";
	cout<<"Informe quantos kw (kilowatts) foram gastos no mes: "; cin>>kw; cout<<"\n";
	cout<<"Digite o numero que defina qual tipo de cliente e voce:\n 1- Residencial\n 2- Comercial\n 3- Industrial\n"; cin>>menu; cout<<"\n";
	switch (menu)
		{
			system ("cls");
			case 1:
				cout<<"Cliente: "<<nome<<'\n';
				cout<<"Cliente do Tipo: Residencial"<<'\n';
				cout<<"Total a pagar: R$ "<<calcular(kw, residencial);
				break;
			case 2:
				cout<<"Cliente: "<<nome<<'\n';
				cout<<"Cliente do Tipo: Comercial"<<'\n';
				cout<<"Total a pagar: R$ "<<calcular(kw, comercial);
				break;
			case 3:
				cout<<"Cliente: "<<nome<<'\n';
				cout<<"Cliente do Tipo: Industrial"<<'\n';
				cout<<"Total a pagar: R$ "<<calcular(kw, industrial);
				break;
			default:
				cout<<"Codigo Invalido...";
		}
	system ("PAUSE > null");
	return 0;
}
