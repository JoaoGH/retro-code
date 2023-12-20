#include <iostream>
using namespace std;
int opc, qtd, taxa_c;
const int pista=150, cadeira=260, cadeira2=380, cadeira3=450, taxa=34;
float calcular(int opc, int qtd )
{
	if (opc==1)
	{
		taxa_c=qtd*taxa;
		return qtd*pista+taxa_c;
	}
	else if (opc==2)
	{
		taxa_c=qtd*taxa;
		return qtd*cadeira+taxa_c;
	}
	else if (opc==3)
	{
		taxa_c=qtd*taxa;
		return qtd*cadeira2+taxa_c;
	}
	else
	{
		taxa_c=qtd*taxa;
		return qtd*cadeira3+taxa_c;
	}
}
int main ()
{
	cout<<"Digite o numero correspondente ao ingresso q deseja comprar: \n 1-Pista (R$ 150,00)\n 2-Cadeira Superior (R$ 260,00)\n 3-Cadeira Gold (R$ 380,00)\n 4-Cadeira Premium  (R$ 450,00)\n ";
	cin>>opc;
	switch (opc)
	{
		case 1:
			system ("cls");
			cout<< "Quantos ingressos o(a) senhor(a) gostaria de comprar: ";
			cin>>qtd;
			system ("cls");
			cout<<"Quantidade de Ingressos: "<<qtd<<'\n';
			cout<<"Valor da unidade: R$ 150,00"<<'\n';
			cout<<"Total a pagar: "<<calcular(opc, qtd);
			break;
		case 2:
			system ("cls");
			cout<< "Quantos ingressos o(a) senhor(a) gostaria de comprar: ";
			cin>>qtd;
			system ("cls");
			cout<<"Quantidade de Ingressos: "<<qtd<<'\n';
			cout<<"Valor da unidade: R$ 260,00"<<'\n';
			cout<<"Total a pagar: "<<calcular(opc, qtd);
			break;
		case 3:
			system ("cls");
			cout<< "Quantos ingressos o(a) senhor(a) gostaria de comprar: ";
			cin>>qtd;
			system ("cls");
			cout<<"Quantidade de Ingressos: "<<qtd<<'\n';
			cout<<"Valor da unidade: R$ 380,00"<<'\n';
			cout<<"Total a pagar: "<<calcular(opc, qtd);
			break;
		case 4:
			system ("cls");
			cout<< "Quantos ingressos o(a) senhor(a) gostaria de comprar: ";
			cin>>qtd;
			system ("cls");
			cout<<"Quantidade de Ingressos: "<<qtd<<'\n';
			cout<<"Valor da unidade: R$ 450,00"<<'\n';
			cout<<"Total a pagar: "<<calcular(opc, qtd);
			break;
		default:
			system ("cls");
			cout<<"Codigo Invalido...";
	}
	system ("PAUSE>null");
	return 0;
}
