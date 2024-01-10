#include <iostream>
using namespace std;
float media[5];
string nome[5];
int main()
{
	for(int i=0;i<5;i++)
	{
		cout<<endl;
		cout<<"Informe o nome do aluno: ";
		cin>>nome[i];
		cout<<"Informe a media final do aluno: ";
		cin>>media[i];
	}
	cout<<endl;
	cout<<"Alunos reprovados: "<<'\n';
	for(int i=0; i<5;i++)
	{
		if (media[i]<6)
		{
			cout<<"Aluno: "<<nome[i]<<" reprovado "<<'\n';
		}
	}
	system("PAUSE>null");
	return 0;
}
