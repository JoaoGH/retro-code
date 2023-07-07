#include <iostream>
using namespace std;
string nome, op;
float sal_fix, horas_trab, sal_final, abono;
const float v_hora=15;
int main ()
{
	op="S";
	while ((op=="S")or(op=="s"))
	{cout<<"Informe o nome do professor(a): ";
	cin>>nome;
	cout<<"Informe o total de hora trabalhadas: ";
	cin>>horas_trab;
	cout<<"Informe o salario fixo do professor(a): ";
	cin>>sal_fix;
	abono=horas_trab*v_hora;
	sal_final=sal_fix+abono;
	system("cls");
	cout << fixed;
	cout.precision(2);
	cout<<"Professor(a): "<<nome<<'\n';
	cout<<"Tem salario fixo de: R$"<<sal_fix<<'\n';
	cout<<"Abono de: R$"<<abono<<'\n';
	cout<<"Salario a receber: R$"<<sal_final<<'\n';
	cout<<"Continuar? S ou N ";
	cin>>op;
	}
	
	system ("PAUSE > null");
	return 0;
}
