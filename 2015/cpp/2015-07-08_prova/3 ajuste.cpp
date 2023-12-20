#include <iostream>
using namespace std;
string nome;
int menu;
float salario, sal_final, abono;
const float cod1=0.1, cod2=0.2, cod3=0.3;
int main()
{
	cout<<"Informe o nome do funcionario: ";
	cin>>nome;
	cout<<"Informe o cargo que deseja reajustar: \n1 para Gerente: \n2 para Engenheiro: \n3 para Tecnico: \n";
	cin>>menu;
	switch(menu)
	{
		case 1:
			cout<<"Informe o salario do funcionario: ";
			cin>>salario;
			abono=salario*cod1;
			sal_final=salario+abono;
			cout<<"Funcionario: "<<nome<<'\n';
			cout<<"Salario antigo: R$ "<<salario<<'\n';
			cout<<"Ajuste de: R$ "<<abono<<'\n';
			cout<<"Salario atual: R$ "<<sal_final<<'\n';
			break;
		case 2:
			cout<<"Informe o salario do funcionario: ";
			cin>>salario;
			abono=salario*cod2;
			sal_final=salario+abono;
			cout<<"Funcionario: "<<nome<<'\n';
			cout<<"Salario antigo: R$ "<<salario<<'\n';
			cout<<"Ajuste de: R$ "<<abono<<'\n';
			cout<<"Salario atual: R$ "<<sal_final<<'\n';
			break;
		case 3:
			cout<<"Informe o salario do funcionario: ";
			cin>>salario;
			abono=salario*cod3;
			sal_final=salario+abono;
			cout<<"Funcionario: "<<nome<<'\n';
			cout<<"Salario antigo: R$ "<<salario<<'\n';
			cout<<"Ajuste de: R$ "<<abono<<'\n';
			cout<<"Salario atual: R$ "<<sal_final<<'\n';
			break;
		default:
			cout<<"Codigo invalido...";
	}
}
