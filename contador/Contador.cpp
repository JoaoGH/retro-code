#include <iostream>
using namespace std;
string opc;
float sair, meses, v_inicial, v_final, v_p_mes, cu;
const float juros=0.01;
int main ()
{opc="S";
	while((opc=="S")or(opc=="s"))
	{
	system("cls");
	sair=1;
	cout<<"Informe valor depositado inicalmente: R$ ";
	cin>>v_inicial;
	cout<<"Informe quanto tempo o dinheiro ficou na poupança (em meses): ";
	cin>>meses;
	cu=v_inicial;
	while(meses>=sair)
	{
		system("cls");
		cout<< fixed;
		cout.precision(2);
		v_p_mes=v_inicial*juros;
		v_final=v_inicial+v_p_mes;
		v_inicial=v_final;
		sair++;
	}
	cout<<"Valor inicial: R$ "<<cu<<'\n';
	cout<<"Valor final: R$"<<v_final<<'\n';
	cout<<"Executar novamnete? S ou N ";
	cin>>opc;
	}
}
