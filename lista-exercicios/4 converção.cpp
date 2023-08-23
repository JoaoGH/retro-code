#include <iostream>
using namespace std;
float v_reais, v_dolar, dolar;
string nome, opc;
int main()
{
	opc="S";
	while((opc=="S")or(opc=="s"))
	{	
		system("cls");
		cout<<"Informe a cotacao do dolar de hoje: ";
		cin>>dolar;
		cout<<"Informe o valor a ser convertido: US$";
		cin>>v_dolar;
		cout<<fixed;
		cout.precision(2);
		system("cls");
		v_reais=v_dolar*dolar;
		cout<<"US$ "<<v_dolar<<" eh Equivalente a R$ "<<v_reais<<'\n';
		cout<<"Executar novamnete? S ou N ";
		cin>>opc;
	
	}
	return 0;
}
