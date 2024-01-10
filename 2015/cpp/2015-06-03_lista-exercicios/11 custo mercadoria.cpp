#include <iostream>
using namespace std;
float custo, custo1, custo2, custo3, custo_inicial, IPIp, IPI, ICMSp, ICMS, STp, ST;
string opc;
int main()
{
	opc="S";
	while ((opc=="S")or(opc=="s"))
	{
		system("cls");
		cout<<"Informe o custo inicial da mercadoria: R$";
		cin>>custo_inicial;
		cout<<"Informe IPI %: ";
		cin>>IPI;
		cout<<"Infotme ST %: ";
		cin>>ST;
		cout<<"Informe ICMS %: ";
		cin>>ICMS;
		cout<<fixed;
		cout.precision(2);
		system("cls");
		STp=ST/100;
		IPIp=IPI/100;
		ICMSp=ICMS/100;
		custo1=custo_inicial*ICMSp;
		custo2=custo_inicial*IPIp;
		custo3=custo_inicial*STp;
		custo=(custo_inicial-custo1)+custo2+custo3;
		system ("cls");
		system ("PAUSE>>null");
		cout<<"o custo final sera: R$ "<<custo<<'\n';
		cout<<"Executar novamente? S ou N ";
		cin>>opc;
	}
}
