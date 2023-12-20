#include <iostream>
using namespace std;
float VH, SL, SB, TD, HT, PD;
string nome, opc;
int main ()
{
	opc="s";
	while((opc=="S")or(opc=="s"))
	{
		system("cls");
		cout<<"Informe o nome do(a) funcionario(a): ";
		cin>>nome;
		cout<<"Informe o valor da hora do(a) funcionario(a): ";
		cin>>VH;
		cout<<"Informe o total do horas trabalhadas pelo(a) funcionario(a) no mes: ";
		cin>>HT;
		cout<<"Informe o percuntal de desconto do INSS: ";
		cin>>PD;
		system("cls");
		cout<<fixed;
		cout.precision(2);
		SB=VH*HT;
		TD=PD/100;
		SL=SB-TD;
		system ("cls");
		system("PAUSE>>null");
		cout<<"Funcionario(a): "<<nome<<'\n';
		cout<<"Tem salario bruto de: R$ "<<SB<<'\n';
		cout<<"Valor de desconto do salario: "<<TD<<'\n';
		cout<<"O(A) funcionario(a) tem salario liquido de: R$ "<<SL<<'\n';
		cout<<"Executar novamente? S ou N ";
		cin>>opc;
	}
}
