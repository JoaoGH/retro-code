#include <iostream>
using namespace std;
int n1, n2, n3;
string op;
int main ()
{
	op = "S";
	while ((op=="s")or(op=="S"))
	{
	cout << "Informe o primeiro numero: ";
	cin >> n1;
	cout << "Informe o segundo numero: ";
	cin >> n2;
	cout << "Informe o terceiro numero: ";
	cin >> n3;
	if ((n1<n2) and (n1<n3) and (n2<n3))
	{
		printf ("\n Ordem crescente: %d %d %d ", n1, n3, n2);
	}
	else if ((n1>n2)and(n1<n3)and(n2<n3))
	{
		printf ("\n Ordem crescente: %d %d %d ", n2, n1, n3);
	}
	else if ((n2>n1)and(n2>n3)and(n3<n1))
	{
		printf ("\n Ordem crescente: %d %d %d ", n3, n1, n2);
	}
	else if ((n3<n1)and(n2<n3)and(n2<n1))
	{
		printf("\n Ordem crescente: %d %d %d ", n2, n3, n1); 
	}
	else if ((n3<n1)and(n3>n2)and(n1>n2))
	{
		printf("\n Ordem crescente: %d %d %d ", n3, n2, n1);
	}
	cout <<"Deseja continuar? S p/ sim ou N p/ nao ";
	cin>>op;
	}

	return 0;
}

