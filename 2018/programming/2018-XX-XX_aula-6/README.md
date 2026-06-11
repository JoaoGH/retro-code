# Introdução ao Python e Algoritmos de Validação

Este diretório contém uma série de scripts desenvolvidos como exercícios práticos para a fixação dos fundamentos da linguagem Python. 
A progressão dos códigos vai desde operações matemáticas e lógicas básicas até a implementação de algoritmos complexos de validação de documentos (CPF).

## Conteúdo e Funcionamento

O repositório é composto por scripts independentes executados via terminal, abordando diferentes conceitos de lógica de programação:

* **Matemática e Condicionais Básicas**:
  * `aula6.py`: Função que recebe dois valores e identifica qual é o maior.
  * `exercicio02.py`: Função que utiliza o operador de módulo (`%`) para verificar se um número é múltiplo de outro.
* **Cálculos Geométricos**:
  * `exercicio03.py`: Cálculo da área de um quadrado.
  * `exercicio04.py`: Cálculo da área, diâmetro e circunferência de um círculo.
  * `exercicio05.py`: Cálculo da área de um triângulo.
* **Manipulação de Estruturas de Dados**:
  * `exercicio06.py`: Script interativo que utiliza um laço `while` para popular dinamicamente uma lista (`append`) com inputs do usuário, realizando cálculos de soma e média em tempo real.
  * `exercicio07.py`: Exemplo de estruturação do bloco principal de execução (`if __name__ == "__main__":`).
* **Algoritmos de Validação (CPF)**:
  * `exercicio09.py`: Gerador de dígitos verificadores. O script recebe os 9 primeiros dígitos de um CPF, trata a string (removendo pontos) e executa o cálculo de pesos (módulo 11) para gerar e exibir os dois dígitos finais corretos.
  * `exercicio10.py`: Validador completo de CPF. Recebe o documento com 11 dígitos, processa as regras matemáticas e compara os dígitos verificadores fornecidos com os calculados pela máquina, atestando a validade do documento.

## Tecnologias e Paradigmas

* **Linguagem**: Python 3.x (Declarado com cabeçalho de codificação `# -*- coding: utf-8 -*-`).
* **Conceitos Aplicados**:
  * Definição de funções (`def`).
  * Manipulação e tratamento de strings (`replace()`, `isdigit()`).
  * Estruturas de repetição (`for`, `while`) e controle de fluxo (`if/else`).
  * Casting de tipos (`str()`, `int()`, `float()`).
  * Uso nativo de operações sobre listas (`sum()`, `len()`).

---

Estes scripts foram desenvolvidos como atividades práticas para a disciplina de **Linguagem de Programação III**, ministrada pelo Prof. Guilherme da Silva Xavier.
