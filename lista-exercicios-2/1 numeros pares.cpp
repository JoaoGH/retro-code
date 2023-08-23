#include <iostream>
using namespace std;
int numeros;
int main()
{
	for(numeros=1; numeros<=200; numeros++)
	{
		if(numeros%2==0)
		{
		cout << numeros<<'\n';
		}
	}
	cout<<"Prescione enter para encerrar o programa...";
	system("PAUSE>NULL");
	return 0;
}
