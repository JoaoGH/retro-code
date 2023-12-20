#include <iostream>
using namespace std;
float sal, sal_inicial, ajuste, aumento, sal_final;
const float abono= 0.15, desc=0.08;
string nome, opc;
int main()
{opc="S";
	while ((opc=="S")or(opc=="s"))
	{
		system("cls");
		cout<<"Informe o nome do(a) funcionario(a): ";
		cin>>nome;
		cout<<"Informe o salario inicial do(a) funcionario(a): R$ ";
		cin>>sal_inicial;
		cout<<fixed;
		cout.precision(2);
		system("cls");
		aumento=sal_inicial*abono;
		sal=sal_inicial+aumento;
		ajuste=sal*desc;
		sal_final=sal-ajuste;
		cout<<"Funcionario(a): "<<nome<<'\n';
		cout<<"Salario inicial: R$ "<<sal_inicial<<'\n';
		cout<<"Salario com aumento: R$"<<sal<<'\n';
		cout<<"Salario final: R$"<<sal_final<<'\n';
		cout<<"Executar novamnee? S ou N ";
		cin>>opc;
	}
}
