#include <iostream>
using namespace std;
int numeros;
int main()
{
	for(numeros=100; numeros<=190; )
	{	
		numeros=numeros+10;
		cout<<numeros<<'\n';
	}
	cout<<"Prescione enter para sair...";
	system("PAUSE>NULL");
	return 0;
}
