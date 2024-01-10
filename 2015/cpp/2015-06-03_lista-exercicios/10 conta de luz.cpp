#include <iostream>
using namespace std;
float sal_min, kw, v_kw, kw_casa, conta, conta1, desc;
string opc;
int main()
{
	opc="S";
	while((opc=="S")or(opc=="s"))
	{
		system("cls");
		cout<<"Informe o valor de salario minimo: R$ ";
		cin>>sal_min;
		cout<<"Iforme quanto quilowatts foram gastos na residencia: ";
		cin>>kw_casa;
		cout<<fixed;
		cout.precision(2);
		v_kw=sal_min/7;
		kw=kw_casa/100;
		conta=kw*v_kw;
		desc=conta*0.01;
		conta1=conta-desc;
		system ("cls");
		system ("PAUSE>>null");
		cout<<"Cada KW vale: R$ "<<v_kw<<'\n';
		cout<<"O valor a ser pago sera: R$ "<<conta<<'\n';
		cout<<"O valor a ser pago com 10% de desconto: R$ "<<conta1<<'\n';
		cout<<"Executar novamente? S ou N ";
		cin>>opc;
	}
}
