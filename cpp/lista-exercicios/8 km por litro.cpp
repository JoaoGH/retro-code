#include <iostream>
using namespace std;
float km, litros, km_p_litros;
string opc;
int main ()
{
	opc="S";
	while ((opc=="S")or(opc=="s"))
	{	
		system("cls");
		cout<<"Informe quantos litros de combustivel voce colocou no veiculo: ";
		cin>>litros;
		cout<<"Informe quantos quilometros rodou com o veiculo depois de abastecer: ";
		cin>>km;
		cout<<fixed;
		cout.precision(2);
		km_p_litros=km/litros;
		cout<<"Seu veiculo, fez "<<km_p_litros<<" por litro."<<'\n';
		cout<<"Executar novamente? S ou N ";
		cin>>opc;
	}
}
