#include <iostream>
using namespace std;
float prest, pgas, valor, v_total, pago, saldo_devedor;
string opc;
int main()
{opc="S";
	while((opc=="S")or(opc=="s"))
	{
		system ("cls");
		cout<<"Informe o numero total de prestacoes: ";
		cin>>prest;
		cout<<"Quantas destas ja foram pagas: ";
		cin>>pgas;
		cout<<"Qual o valor da prestacao: R$";
		cin>>valor;
		cout<<fixed;
		cout.precision(2);
		system("cls");
		v_total=prest*valor;
		pago=pgas*valor;
		saldo_devedor=v_total-pago;
		cout<<"Total a ser pago: R$"<<v_total<<'\n';
		cout<<"Saldo devedor: R$"<<saldo_devedor<<'\n';
		cout<<"Executar novamente? S ou N ";
		cin>>opc;
	
	}
	return 0;
}

