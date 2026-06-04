#include <iostream> 
using namespace std; 
int meses, tempo_trab, i; 
float salario, salario_final,abono;
int main(){
	abono=0.1;
	cout<<"Informe quantidade de meses trabalhados: ";
	cin>>meses;cout<<"Informe seu salario: ";
	cin>>salario;tempo_trab=meses/12;	
	for(i=1; i<=tempo_trab; i++){
		salario_final= (salario*abono)+salario;
		abono= abono+0.1;
	}
	cout<<"Salario final: "<<salario_final;
}
