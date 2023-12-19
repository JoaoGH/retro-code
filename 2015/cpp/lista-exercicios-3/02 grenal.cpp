#include <iostream>
using namespace std;
string opc;
int inter, gremio, empates, vitoriasG, vitoriasI, grenal;
int main()
{
	opc="S";
	grenal=0;
	while(opc=="S" or opc=="s")
	{
		grenal=grenal+1;
		system("cls");
		cout<<"Informe gols marcados pelo GREMIO: ";
		cin>>gremio;
		cout<<"Informegols marcados pelo INTER: ";
		cin>>inter;
		if(gremio>inter)
		{
			vitoriasG=vitoriasG+1;
		}
		else if(gremio==inter)
		{
			empates=empates+1;
		}
		else
		{
			vitoriasI=vitoriasI+1;
		}
		cout<<"Executar novamente? S ou N ";
		cin>>opc;
	}
	cout<<"Fizeram parte da estatistica "<<grenal<<'\n';
	cout<<"O gremio teve "<<vitoriasG<<" vitorias"<<'\n';
	cout<<"O inter teve "<<vitoriasI<<" vitorias"<<'\n';
	cout<<"E teve "<<empates<<" empates"<<'\n';
	system("PAUSE>NULL");
	return 0;
}
