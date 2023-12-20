#include <iostream>
using namespace std;
int numeros[10];
int main()
{
	for(int i=0;i<10;i++)
	{
		cout<<"Informe um numero: ";
		cin>>numeros[i];
		
	}
	cout<<endl;
	cout <<"Numeros impares: "<<'\n';
	for(int i=0;i<10;i++)
	{
		if(numeros[i]%2==1)
		{
		cout<< numeros[i]<<'\n';
		}
	}
		
	system("PAUSE>null");
	return 0;
}
