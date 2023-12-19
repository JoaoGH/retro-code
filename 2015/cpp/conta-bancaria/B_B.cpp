#include <iostream>
using namespace std;
string cliente, op;
float v_dep, v_saq, saldo, saldo_atual, depsaq;
int main()
{
	op ="S";
	while ((op=="S")or(op=="s"))
	{
	system("cls");
	cout<<"Informe o nome do cliente: ";
	cin>>cliente;
	cout<<"Informe seu saldo: ";
	cin>>saldo;
	cout<<"Digite 1 para deposito ou 2 para saque: ";
	cin>>depsaq;
	if  (depsaq==1)
	{
		cout<<"Informe quanto vai depositar: ";
		cin>>v_dep;
		saldo_atual = v_dep+saldo;
		cout<<"Cliente: "<<cliente<<'\n';
		cout<<"Saldo inicial de: R$"<<saldo<<'\n';
		cout<<"Saldo atual de: R$"<<saldo_atual<<'\n';
	}
	else
	{
		cout<<"Informe o valor de saque: ";
		cin>>v_saq;
		saldo_atual=saldo-v_saq;
		cout<<"Cliente: "<<cliente<<'\n';
		cout<<"Saldo inicial de: R$"<<saldo<<'\n';
		cout<<"Saldo atual de: R$"<<saldo_atual<<'\n';
	}
	cout<<"Continuar? S ou N ";
	cin>>op;
	}
}
