#include <iostream>
using namespace std;
string nome, sexo, desemp;
int idade, maiores, homens, mulheres, sair, contD;
int main()
{sair=1;mulheres=0;homens=0;maiores=0;contD=0;
      while(sair<=3)
      {cout<<"Informe nome: ";
      cin>>nome;
      cout<<"Informe idade: ";
      cin>>idade;
      if (idade>18)
      {maiores=maiores+1;
                   }
      cout<<"Informe Sexo: M ou F ";
      cin>>sexo;
      if((sexo=="M")or(sexo=="m"))
      {homens=homens+1;
                   }
      else if((sexo=="F")or(sexo=="f"))
      {mulheres=mulheres+1;
                   }
      cout<<nome<<" Esta desempregrado? S ou N ";
      cin>>desemp;
      system("cls");
      if((desemp=="s")or(desemp=="S"))
      {contD=contD+1;
                   }
      sair=sair+1;
      }
      system("cls");
      cout<<"Total de mulheres entrevistadas: "<<mulheres<<'\n';
      cout<<"Total de homens entrevistados: "<<homens<<'\n';
      cout<<"Total de maiores de 18 anos entrevistados: "<<maiores<<'\n';
      cout<<"Total de desempregados entrevistados: "<<contD<<'\n';
      cout<<"Total de pessoas entrevistadas: "<<homens+mulheres<<'\n';
      system("PAUSE> null");
    }
