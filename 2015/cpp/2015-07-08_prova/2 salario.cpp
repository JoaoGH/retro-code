#include <iostream>
using namespace std;
string nome, opc;
float sal_fixo, sal_final, total_horas, abono;
const float ajuste=15;
int main()
{
	opc="S";
	while((opc=="S")or(opc=="s"))
	{
		system("cls");
		cout<<"Informe o nome do professor: ";
		cin>>nome;
		cout<<"Informe o salrio fixo do professor: ";
		cin>>sal_fixo;
		cout<<"Informe o total de horas que professor trabalhou: ";
		cin>>total_horas;
		cout.precision(2);
		cout<<fixed;
		abono=total_horas*ajuste;
		sal_final=sal_fixo+abono;
		cout<<"Professor: "<<nome<<'\n';
		cout<<"Tem salario fixo de: R$ "<<sal_fixo<<'\n';
		cout<<"Teve abono de: R$ "<<abono<<'\n';
		cout<<"Salario de: R$ "<<sal_final<<'\n';
		cout<<"Executar novamente? S ou N ";
		cin>>opc;
	}
}
