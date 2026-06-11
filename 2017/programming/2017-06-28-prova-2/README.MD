# Avaliação Prática: Sistema de Notas com Arrays (Java)

Este diretório contém o código-fonte de uma avaliação prática desenvolvida para a disciplina de **Linguagem de Programação II**.
O objetivo do script é simular um sistema rudimentar de gestão de turmas rodando via terminal, demonstrando o domínio sobre vetores e laços de repetição.

## Estrutura e Funcionamento

O algoritmo opera de forma sequencial, dividindo o processo em duas etapas principais de interação com o usuário:

* **Cadastro e Ordenação de Nomes**:
  * Utiliza a classe nativa `Scanner` para capturar os nomes de 15 alunos via input do teclado e armazená-los em um vetor de strings (`nome[]`).
  * O sistema exibe a lista original e, logo em seguida, invoca o método estático `Arrays.sort()` para reordenar automaticamente o vetor e exibir os alunos em **ordem alfabética**.
* **Lançamento de Notas e Processamento Matemático**:
  * O programa itera sobre o vetor de alunos utilizando um laço `for`. Para cada aluno, solicita a entrada de três notas distintas (`nota1`, `nota2`, `nota3`).
  * A média aritmética individual é calculada e armazenada em um segundo vetor de números de ponto flutuante (`nota[]`), que atua como um vetor paralelo ao dos nomes.
  * Por fim, um último laço de repetição realiza a soma acumulada (`soma = soma + nota[i]`) de todas as médias individuais para calcular e exibir a **média geral da turma** (`soma/15`).

## Tecnologias e Conceitos Aplicados

* **Linguagem**: Java.
* **Bibliotecas Nativas**: 
  * `java.util.Scanner` (Leitura de fluxo de entrada do sistema).
  * `java.util.Arrays` (Utilitário para manipulação e ordenação rápida de arrays estáticos).
* **Paradigmas Lógicos**:
  * Declaração e manipulação de **Arrays/Vetores Unidimensionais** de diferentes tipos (`String` e `double`).
  * Uso intensivo de **Laços de Repetição (`for`)** para popular arrays, processar matrizes de notas e varrer dados para cálculos de agregação.

---

O script reflete as atividades e desafios de lógica de programação estruturada resolvidos durante as aulas de **Linguagem de Programação II** no ensino técnico.
