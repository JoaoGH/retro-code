#include <iostream>
using namespace std;
float n1, n2;
int menu;
float somar (float x, float y)
{
	return (x+y);
}
float multiplicar (float x, float y)
{
	return (x*y);
}
float dividir (float x, float y)
{
	return (x/y);
}
float subtrair (float x, float y)
{
	return (x-y);
}
int main ()
{
	cout<<"Digite o numero correspondente a operacao que deseja realizar:\n 1 - Somar\n 2 - Multiplicar\n 3 - Dividir\n 4 - Subtrair\n ";
	cin>>menu;
	switch (menu)
	{
		case 1:
			cout<<"Digite o primeiro valor: "<<'\n';
			cin>>n1;
			cout<<"Digite o segundo valor: "<<'\n';
			cin>>n2;
			cout<< n1 <<" + "<<n2<<" = "<<somar (n1, n2);
			break;
		case 2:
			cout<<"Digite o primeiro valor: "<<'\n';
			cin>>n1;
			cout<<"Digite o segundo valor: "<<'\n';
			cin>>n2;
			cout<< n1 <<" * "<<n2<<" = "<<multiplicar (n1, n2);
			break;
		case 3:
			cout<<"Digite o primeiro valor: "<<'\n';
			cin>>n1;
			cout<<"Digite o segundo valor: "<<'\n';
			cin>>n2;
			cout<< n1 <<" / "<<n2<<" = "<<dividir (n1, n2);
			break;
		case 4:
			cout<<"Digite o primeiro valor: "<<'\n';
			cin>>n1;
			cout<<"Digite o segundo valor: "<<'\n';
			cin>>n2;
			cout<<n1 <<" - "<<n2<<" = "<<subtrair (n1, n2);
			break;
		default:
			cout<<"Codigo Invalido..."<<'\n';
		}
		system("PAUSE>null");
		return 0;		
}
