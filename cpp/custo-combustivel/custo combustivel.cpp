#include <iostream>
using namespace std;
float distancia, litros_g, litros_a, kmlg, kmla, custo1, custo2;
string op, carro;
const float gas=2.98, alcool=2.56;
int main()
{op="S";
while((op=="S")or(op=="s"))
{
	cout<<"Informe o modelo do seu carro: ";
	cin>>carro;
	cout<<"Informe a distancia a ser percorrida(em KM): ";
	cin>>distancia;
	cout<<"Informe quantos KM seu carro faz p/ litro de gasolina: ";
	cin>>kmlg;
	cout<<"Informe quantos KM seua carro faz p/ litro de alcool: ";
	cin>> kmla;
	litros_g=distancia/kmlg;
	litros_a=distancia/kmla;
	custo1=litros_g*gas;
	custo2=litros_a*alcool;
	system("cls");
	cout<< fixed;
	cout.precision(2);
	cout<<"Carro: "<<carro<<'\n';
	cout<<"Com gasolina vai: "<<litros_g<< " litros"<<'\n';
	cout<<"Custo com gasolina: R$"<<custo1<<'\n';	
	cout<<"Com alcool vai: "<<litros_a<< " litros"<<'\n';
	cout<<"Custo com alcool: "<<custo2<<'\n';
	cout<<"Executar novamente? S ou N ";
	cin>>op;
}
system("PAUSE>null");
return 0;
}
