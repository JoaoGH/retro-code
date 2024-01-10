#include <iostream>
using namespace std;
string opc;
float valor, felipe, v_pessoa;
int carlos;
int main()
{opc="s";
	while((opc=="S")or(opc=="s"))
	{
		system("cls");
		cout<<"Informe o valor da conta: R$";
		cin>>valor;
		cout<<fixed;
		cout.precision(2);
		system("cls");
		v_pessoa= valor/3;
		carlos=v_pessoa;
		felipe=((v_pessoa-carlos)*2)+v_pessoa;
		cout<<"Andre e Carlos irao pagar: R$ "<<carlos<<" cada"<<'\n';
		cout<<"Felipe pagara: R$ "<<felipe<<'\n';
		cout<<"Executar novamente? S ou N ";
		cin>>opc;
	}
}
