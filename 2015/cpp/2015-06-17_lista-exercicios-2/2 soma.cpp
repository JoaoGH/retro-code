#include <iostream>
using namespace std;
int numeros, resultado;
int main()
{
	for(numeros=1; numeros<=100; numeros++)
	{
		resultado=resultado+numeros;
	}
	cout<<resultado<<'\n';
	system("PAUSE>NULL");
	system("cls");
	cout<<"Precione enter para encerrar o programa...";
	system("PAUSE>NULL");
	return 0;
}
