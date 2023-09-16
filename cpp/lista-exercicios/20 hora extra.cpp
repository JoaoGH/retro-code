#include <iostream>
using namespace std;
string opc;
float horas_trab, sal_min, v_extra, v_hora, horas_extras, extras, sal, sal_bruto;
int main ()
{
	opc="s";
	while ((opc=="S")or(opc=="s"))
	{
		system("cls");
		cout<<"Informe o valor do salario minimo: R$ ";
		cin>>sal_min;
		cout<<"Informe o total de horas trabalhadas: ";
		cin>>horas_trab;
		cout<<"Informe quantas horas extras foram trabalhadas: ";
		cin>>horas_extras;
		system("cls");
		cout<<fixed;
		cout.precision(2);
		v_hora=sal_min/8;
		v_extra=sal_min/8;
		sal_bruto=horas_trab*v_hora;
		extras=horas_extras*v_extra;
		sal=sal_bruto+extras;
		cout<<"Salario a receber: R$ "<<sal<<'\n';
		cout<<"Executar novamente? S ou N ";
		cin>>opc;
	}
}
