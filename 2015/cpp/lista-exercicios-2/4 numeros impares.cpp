#include <iostream>
using namespace std;
int numeros;
int main()
{
	for(numeros=1; numeros<=9; numeros++)
	{
		if(numeros%2==1)
		{
		cout << numeros<<'\n';
		}
	}
	cout<<"Prescione enter para encerrar o programa...";
	system("PAUSE>NULL");
	return 0;
}
