#include <iostream>
using namespace std;
float n1, n2, n3, media;
string nome, sair;
int main()
{
	do{	
		system("cls");
		cout<<"Informe o nome do aluno: ";
		cin>> nome;
		cout<<"Informe a primeira nota: ";
		cin>>n1;
		cout<<"Informe a segunda nota: ";
		cin>>n2;
		cout<<"Informe a terceira nota: ";
		cin>>n3;
		cout<<fixed;
		cout.precision(2);
		media=(n1+n2+n3)/3;
		system("cls");
		cout<<"Aluno(a) "<<nome<<'\n';
		cout<<"Media final de: "<<media<<'\n';
		cout<<"Deseja executar novamente? S ou N ";
		cin>> sair;
	}
	while((sair=="S")or(sair=="s"));

	return 0;
}

