#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#include <windows.h>
using namespace std;
float n1, n2;
int menu, col, lin, coli, lini, colf, linf;
string coluna;
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
float somar (float x, float y)
{
	return (x+y);
}
float multiplicar (float x, float y)
{
	return (x*y);
}
float dividir (float x, float y)
{
	return (x/y);
}
float subtrair (float x, float y)
{
	return (x-y);
}
int main ()
{
	janela (1,1,78,25); //COLi,LINi,COLf,LINf
	janela (8,3,73,5);
	gotoxy (10,4);
	cout<<"Digite o numero correspondente a operacao que deseja realizar:\n 1 - Somar\n 2 - Multiplicar\n 3 - Dividir\n 4 - Subtrair\n ";
	cin>>menu;
	switch (menu)
	{
		case 1:
			cout<<"Digite o primeiro valor: ";
			cin>>n1;
			cout<<"Digite o segundo valor: ";
			cin>>n2;
			cout<< n1 <<" + "<<n2<<" = "<<somar (n1, n2);
			break;
		case 2:
			cout<<"Digite o primeiro valor: ";
			cin>>n1;
			cout<<"Digite o segundo valor: ";
			cin>>n2;
			cout<< n1 <<" * "<<n2<<" = "<<multiplicar (n1, n2);
			break;
		case 3:
			cout<<"Digite o primeiro valor: ";
			cin>>n1;
			cout<<"Digite o segundo valor: ";
			cin>>n2;
			cout<< n1 <<" / "<<n2<<" = "<<dividir (n1, n2);
			break;
		case 4:
			cout<<"Digite o primeiro valor: ";
			cin>>n1;
			cout<<"Digite o segundo valor: ";
			cin>>n2;
			cout<<n1 <<" - "<<n2<<" = "<<subtrair (n1, n2);
			break;
		default:
			cout<<"Codigo Invalido...";
		}
		system("PAUSE>null");
		return 0;		
}
