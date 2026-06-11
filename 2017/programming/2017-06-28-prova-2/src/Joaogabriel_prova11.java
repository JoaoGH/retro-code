
import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

public class Joaogabriel_prova11 {

	public static void main(String[] args) {
		String nome[] =new String[15];
		Scanner scan = new Scanner(System.in);
		
		double nota[] =new double[15];
		double nota1, nota2, nota3;
		double soma = 0;
		

		System.out.println("-Nome dos alunos-");
		for(int i=0; i<15; i++){
			System.out.print("Digite o nome do "+ (i+1) +"º aluno(a): ");
			nome[i] = scan.next();
		}
		System.out.println("");
		System.out.println("Ordem digitada: ");
		for(int j=0; j<15; j++){
			System.out.print((j+1) +"º aluno(a): "+nome[j]);
			System.out.println("");
		}
		System.out.println("");
		System.out.println("Ordem alfabetica: ");
		Arrays.sort(nome);
		for(int j=0; j<15; j++){
			System.out.print((j+1) +"º aluno(a): "+nome[j]);
			System.out.println("");
		}
		
		
		System.out.println("");
		System.out.println("-Nota dos alunos-");
		for(int i=0; i<nota.length; i++){
			System.out.println(nome[i]);
		
			System.out.print("Digite a 1ª nota: ");
			nota1=scan.nextDouble();
			
			System.out.print("Digite a 2ª nota: ");
			nota2=scan.nextDouble();
			
			System.out.print("Digite a 3ª nota: ");
			nota3=scan.nextDouble();
			
			nota[i] = (nota1+nota2+nota3)/3;

			System.out.println("");
		}

		System.out.println("");
		for(int i=0; i<nota.length; i++){
			System.out.println("Média do "+nome[i] +": "+nota[i]);
		}
		System.out.println("");
		for(int i=0; i<nota.length; i++){
			soma=soma+nota[i];
		}
		System.out.print("Média da turma: "+(soma/nota.length));
		

		System.out.println("");
		System.out.println("");
		System.out.println("");
		System.out.println("-Avaliação final-");
		for(int i=0; i<nota.length; i++){
			if(nota[i] >= 7){
				System.out.println(nome[i]+" foi aprovado.\nCom média "+ nota[i]);
				System.out.println("");
			}
			else if((nota[i]>=5) && (nota[i]<7)){
				System.out.println(nome[i]+" ficou em dependencia.\nCom média "+ nota[i]);
				System.out.println("");
			}
			else{
				System.out.println(nome[i]+" foi reprovado.\nCom média "+ nota[i]);
				System.out.println("");
			}
		}
	}

}
