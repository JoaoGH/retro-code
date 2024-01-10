#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
using namespace std;
int col, lin, coli, lini, colf, linf;
string coluna;
float f, c;
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
float calcular (float f, float c)
{
	c=(f-32)*5/9;
	return c;
}
int main()
{
	janela(1,1,78,25);
	janela(20,3,60,5);
	gotoxy(32,4);
	cout<<"Conversor";
	gotoxy(2,7);cout<<"Informe a temperatura em Fahrenheit: ";cin>>f;
	gotoxy(22,15);cout<<"Tecle enter para converter... ";
	system ("PAUSE>null");
	system("cls");
	janela(1,1,78,25);
	janela(20,3,60,5);
	gotoxy(32,4);
	cout<<"Conversor";
	gotoxy(2,7);cout<<f<<" Fahrenheit e equivalente a "<<calcular(f, c)<<" Celsius";
	system ("PAUSE>null");
	return 0;
}
