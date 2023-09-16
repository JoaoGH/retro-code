#include<iostream>
using namespace std;
int num, valor, vezes;
int main()
{	cout<<"Informe um numero: ";
	cin>>valor;
	for (vezes=1; vezes<=9; vezes++)
	{
		cout<<"Informe um numero: ";
		cin>>num;
	if(num>valor)
	{
	valor=num;
	}
}
cout<<"O maior numero e: "<<valor;
}
