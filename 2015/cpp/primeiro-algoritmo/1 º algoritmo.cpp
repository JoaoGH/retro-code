#include <iostream>
using namespace std;
string op;
float v1, v2, vfinal;
int main ()
{
	op = "S";
	while ((op=="S")or(op=="s"))
	{
	cout << "Informe o valor 1: ";
	cin >> v1;
	cout << "Informe o valor 2: ";
	cin >> v2;
	vfinal = v1+v2;
	system ("cls");
	cout << "Valor final: " << vfinal<<'\n';
	cout << "Continuar? S ou N ";
	cin >> op;
	}
	system ("PAUSE > null");
	return 0;
}
