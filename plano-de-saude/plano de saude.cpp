#include <iostream>
using namespace std;
string nome, opc;
int idade;
int main()
{opc="s";
while ((opc=="S")or(opc=="s"))
      {cout<<"Informe o nome do cliente ";
      cin>>nome;
      cout<<"Informe a idade ";
      cin>>idade;
      system ("cls");
      system ("PAUSE > null");
      if(idade<=10)
                   {cout<<"Cliente "<<nome<<'\n';
                   cout<<"Com Idade de "<<idade<<'\n';
                   cout<<"Parcela mensal de R$30.00"<<'\n';
             }
      else if((idade>10)and(idade<29))
           {cout<<"Cliente "<<nome<<'\n';
           cout<<"Com idade de "<<idade<<'\n';
           cout<<"Parcela mensal de R$60.00"<<'\n';
            }
      else if((idade>29)and(idade<45))
      {cout<<"Cliente "<<nome<<'\n';
       cout<<"Com idade de "<<idade<<'\n';
       cout<<"Parcela mensal de R$120.00"<<'\n';
       }
      else if((idade>45)and(idade<59))
      {cout<<"Cliente "<<nome<<'\n';
      cout<<"Com idade de "<<idade<<'\n';
      cout<<"Parcela mensal de R$150.00"<<'\n';
       }
     else if((idade>59)and(idade<65))
     {cout<<"Cliente "<<nome<<'\n';
     cout<<"Com idade de "<<idade<<'\n';
     cout<<"Parcela mensal de R$250.00"<<'\n';
     }
     else
     {cout<<"Cliente "<<nome<<'\n';
     cout<<"Com idade de "<<idade<<'\n';
     cout<<"Parcela mensal de R$400.00"<<'\n';
     }
     cout<<"Continuar? S ou N ";
     cin>>opc;
     system ("cls");
     system ("PAUSE > null");
     return 0;
      }
}
