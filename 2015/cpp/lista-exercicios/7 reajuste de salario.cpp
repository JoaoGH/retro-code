#include <iostream>
using namespace std;
float salario, salario_final, ajuste, percentual;
string nome, opc;
int main()
{
	opc="S";
	while((opc=="S")or(opc=="s"))
	{
		system ("cls");
		cout<<"Informe o nome do funcionario: ";
		cin>>nome;
		cout<<"Informe o salario mensal do funcionario: ";
		cin>>salario;
		cout<<"Informe qual o percentual de reajuste: ";
		cin>>percentual;
		system ("cls");
		cout<<fixed;
		cout.precision(2);
		percentual=percentual/100;
		ajuste=salario*percentual;
		salario_final=ajuste+salario;
		cout<<"Funcionario(a) "<<nome<<'\n';
		cout<<"Esta com o salario reajustado para:  R$"<<salario_final<<'\n';
		cout<<"Executar novamente? S ou N ";
		cin>>opc;
	}
	return 0;
}
