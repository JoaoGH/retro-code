#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
using namespace std;
int col, lin, coli, lini, colf, linf;
string coluna, nome;
float sal_fix, t_vendas, sal_rec;
const float abono=0.2;
void gotoxy(int coluna, int linha)
{
COORD point;
point.X = coluna; point.Y = linha;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), point);
}
void janela(int coli,int lini, int colf, int linf)
{
    coluna="";
	for (col=coli; col<=colf; col++)
    {
		coluna=coluna+'Ä';
		gotoxy(coli,lini);
		cout << coluna;
		gotoxy (coli,linf);
		cout << coluna;
    }     
	for (lin=lini; lin<=linf; lin++)
    {
		gotoxy (coli,lin);
		cout << '³';
		gotoxy (colf,lin);
		cout << '³';
		gotoxy (coli,lini);
		cout << 'Ú';
		gotoxy (coli,linf);
		cout << 'À';
		gotoxy (colf,lini);
		cout << '¿';
		gotoxy (colf,linf);
		cout << 'Ù';
	}
}
calcular(float x,float y, float z)
{
	sal_rec=x*y+z;
	return sal_rec;
}
int main()
{
	janela(1,1,78,25);
	janela(20,3,60,5);
	gotoxy(32,4);//coluna...linha
	cout<<"Folha de Pagamento";
	gotoxy(2,7);cout<<"Informe o nome do funcionario: ";
	getline(cin, nome);
	gotoxy(2,8);cout<<"Informe total de vendas feitas pelo funcionario no mes (em R$): R$ ";
	cin>>t_vendas;
	gotoxy(2,9);cout<<"Informe Salario fixo do Funcionario: R$ ";
	cin>>sal_fix;
	gotoxy(22,15);cout<<"Tecle enter para continuar... ";
	system ("PAUSE>null");
	system("cls");
	janela(1,1,78,25);
	janela(20,3,60,5);
	gotoxy(32,4);cout<<"Folha de Pagamento";
	janela(20,12,60,20);
	gotoxy(35,11);cout<<"Contra Cheque ";
	gotoxy(22,14);cout<<"Funcionario: "<<nome;
	gotoxy(22,16);cout<<"Total de vendas no mes: R$"<<t_vendas;
	gotoxy(22,17);cout<<"Salario fixo: R$ "<<sal_fix;
	gotoxy(22,18);
	//chamada da funcao calcular
	cout<<"Salario a receber: R$"<<calcular(t_vendas, abono, sal_fix);
	system ("PAUSE>null");
	return 0;
}
