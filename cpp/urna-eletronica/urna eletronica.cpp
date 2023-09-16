#include <iostream>
using namespace std;
int open, cod, voto_A, voto_D, voto_G, voto_M, senha, senha_user;
int main()
{
	
	open= 1;
	cout<<"Antes de tudo informe  senha que deseja usar (numeros sem ponto flutuante): ";cin>>senha_user;
	system("cls");
	while (open == 1){
		cout << "Digite o codigo para presidencia: \n\n1 - Aecio neves(PSDB) \n2 - Dilma Roussef(PT) \n3 - Geraldo Alckmin(PSDB) \n4 - Marina Silva(Sem partido) \n5 - Ver votos ";
		cin >> cod;
		system ("cls");
		switch (cod)
		{
			case 1:
				cout << "PSDB: Aecio neves ";
				voto_A++;
				break;
			case 2:
				cout << "PT: Dilma Roussef ";
				voto_D++;
				break;
			case 3: 
				cout << "PSDB: Geraldo Alckmin ";
				voto_G++;
				break;
			case 4: 
				cout << "Sem partido: Marina Silva ";
				voto_M++;
				break;
			case 5:
				cout << "\nDigite a senha para continuar \n ";
				cin >> senha;
				if (senha == senha_user)
				{
				cout << "\nVotos para Aecio Neves " << voto_A;
				cout << "\nVotos para Dilma Roussef " << voto_D;
				cout << "\nVotos para Geraldo Alckmin " << voto_G;
				cout << "\nVotos para Marina Silva " << voto_M;
				}
				else 
				{
					cout << "\nSenha invalida ";
				}
				break;
			default:
				cout << "Erro!!! Codigo invalido ";			 				
		}
		cout << "\n\n\nDigite '1' para continuar \nDigite '2' para encerrar \n ";
		cin >> open;
		system ("cls");
	}
}
