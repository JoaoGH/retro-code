#include <iostream>
using namespace std;
float vproduto, total;
int qtd;
string nome, produto, op;
int main()
{
	op="S";
	while ((op=="s")or(op=="S"))
	{
		system("cls");
		cout << "Informe o nome do cliente: ";
		cin >> nome;
		cout << "Informe o produto: ";
		cin >> produto;
		cout << "Informe quantidade: ";
		cin >> qtd;
		cout << "Infome o valor do produto: ";
		cin >> vproduto;
		total = qtd * vproduto;
		system ("cls");
		cout << fixed;
		cout.precision(2);
		cout << "Cliente: "<< nome << '\n';	
		cout << "Comprou: "<< qtd<<" "<< produto<< '\n';
		cout << "No valor de: "<< vproduto<< '\n';
		cout << "Total a pagar: " << total<< '\n';	
		cout << "Continuar? S ou N ";
		cin >> op;
	}

	system ("PAUSE > null");
	return 0;
	}
