#include <iostream>
using namespace std;
string dnv;
int cod;
float sair, meses, tempo, v_inicial, v_final, v_p_mes, c;
const float juros=0.005, cc=0.0075, c_especial=0.09;
int main()
{
	dnv="s";
	sair=1;
	while((dnv=="S")or(dnv=="s"))
	{
		cout<<"Digite: 1 - Para calcular juros da poupanca. \n\n	2 - Para calcular o juros de conta corrente.\n\n  3 - Para calcular Cheque especial. \n\n";
		cin>>cod;
		system ("cls");
		switch (cod)
		{
		case 1:
			system("cls");
			cout<< fixed;
			cout.precision(2);
			cout<<"Informe o valor depositado inicialmente: R$";
			cin>>v_inicial;
			cout<<"Informe quanto tempo o dinheiro ficou na conta (em meses): ";
			cin>>meses;
			while (sair<=meses)
			{	c=v_inicial;
				v_p_mes=v_inicial*juros;
				v_final=v_inicial+v_p_mes;
				v_inicial=v_final;
				sair=sair+1;
				
			}
			cout<<"Valor inicial: R$ "<<c<<'\n';
			cout<<"Valor final: R$"<<v_final<<'\n';
			break;
		case 2:
			system ("cls");
			cout<<fixed;
			cout.precision(2);
			cout<<"Informe quanto havia inicialmente na conta: R$";
			cin>>v_inicial;
			cout<<"Quantos meses deseja calcular: ";
			cin>>meses;
			while (sair<=meses)
			{
				c=v_inicial;
				v_p_mes=v_inicial*cc;
				v_final=v_inicial-v_p_mes;
				v_inicial=v_final;
				sair=sair+1;
			}
			cout<<"Valor inicial: R$ "<<c<<'\n';
			cout<<"Valor final: R$"<<v_final<<'\n';
			break;
		case 3:
			system("cls");
			cout<<fixed;
			cout.precision(2);
			cout<<"Informe quanto foi o valor que tu usou no Cheque Especial: R$ ";
			cin>>v_inicial;
			cout<<"Quantos dias ira demorar para pagar o valor do Cheque Especial(em dias): ";
			cin>>meses;
			while(sair<=meses)
			{
				c=v_inicial;
				v_p_mes=v_inicial*c_especial;
				v_final=v_inicial+v_p_mes;
				v_inicial=v_final;
				sair=sair+1;
			}
			cout<<"Valor inicial: R$ "<<c<<'\n';
			cout<<"Valor final: R$"<<v_final<<'\n';
			break;
		default:
			system("cls");
			cout<<"Opcao Invalida ";
			system("cls");
		}
	}
	cout<<"Deseja continuar? S ou N ";
	cin>>dnv;
}
