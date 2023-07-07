#include <iostream>
using namespace std;
string nome, op;
float horas_trab, v_hora, sal_bruto, v_desc, sal_receb;
const float inss = 0.1;
int main ()
{
	op="S";
	while((op=="S")or(op=="s"))
	{
	cout << "Informe o nome do funcionario: ";
	cin >> nome;
	cout << "Informe horas trabalhadas pelo funcionario: ";
	cin >> horas_trab;
	cout << "Informe salrio p/ hora: ";
	cin >> v_hora;
	sal_bruto = v_hora * horas_trab;
	v_desc = sal_bruto * inss;
	sal_receb = sal_bruto - v_desc;
	system("cls");
	cout << fixed;
	cout.precision(3);
	cout << "Funcionario: "<<nome<<'\n';
	cout << "Trabalhou: "<<horas_trab<<'\n';
	cout << "Valor p/ hora: R$ "<<v_hora<<'\n';
	cout << "Salario bruto: R$ "<<sal_bruto<<'\n';
	cout << "Desconto do INSS: R$ "<<v_desc<<'\n';
	cout << "Total a receber: R$ "<<sal_receb<<'\n';
	cout<<"Continuar? S ou N ";
	cin>>op;
	}

	system ("PAUSE > null");
	return 0;	 
}
