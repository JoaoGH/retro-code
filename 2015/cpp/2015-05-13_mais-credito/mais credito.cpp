#include <iostream>
using namespace std;
string nome, op;
float saldo, abono;
const float saldo1=0.2, saldo2=0.3, saldo3=0.4;
int main()
{op= "S";
while((op=="S")or(op=="s"))
{	cout<<"Informe o nome do cliente: ";
	cin>>nome;
	cout<<"Informe o saldo medio do cliente: ";
	cin>>saldo;
	if (saldo<200)
	{
		cout<<"Saldo do cliente: "<<nome<<'\n';
		cout<<"Foi de R$"<<saldo<<'\n';
		cout<<"Sem credito"<<'\n';
	}
	else if ((saldo>200)and (saldo<400))
	{
		abono = saldo*saldo1;
		cout<<"Saldo do cliente: "<<nome<<'\n';
		cout<<"Foi de R$"<<saldo<<'\n';
		cout<<"Ganhou credito de R$"<< abono<<'\n';
	}
	else if((saldo > 400)and(saldo < 600))
	{abono=saldo*saldo2;
	cout<<"Saldo de cliente: "<<nome<<'\n';
	cout<<"Foi de R$"<<saldo<<'\n';
	cout<<"Ganhou abono de R$"<<abono<<'\n';
	}
	else
	{abono=saldo*saldo3;
	cout<<"Saldo do cliente: "<<nome<<'\n';
	cout<<"Foi de R$"<<saldo<<'\n';
	cout<<"Ganhou credito de R$"<<abono<<'\n';
	}
	cout<<"Continuar? S ou N ";
	cin>>op;
}

	}
