# Integração de Bases de Dados com Python (SQLite)

Este diretório contém uma série de scripts desenvolvidos para explorar a criação, manipulação e consulta de bases de dados relacionais locais utilizando o motor SQLite integrado nativamente na linguagem Python.

O projeto utiliza o contexto geográfico e demográfico do Brasil (Estados, Siglas, População e Regiões) para exercitar os comandos estruturais (DDL), de manipulação (DML) e de consulta (DQL).

## Estrutura e Funcionamento

A progressão dos exercícios acompanha o ciclo de vida completo de uma base de dados, desde a sua conceção até à realização de consultas complexas e lógicas de agregação matemática:

* **Criação e Configuração (DDL & Inicialização)**:
  * `aula8.py`: Estabelece a ligação física e cria o ficheiro `brasil.db`, instanciando a tabela `estados` com as colunas `id`, `nome` e `populacao`.
  * `exercicio1.3.py`: Responsável por popular a base de dados inicial, inserindo os registos de todos os estados brasileiros e as suas respetivas populações a partir de uma lista de tuplas.
  * `exercicio4.py`: Demonstra a alteração da estrutura da tabela em tempo real, utilizando `ALTER TABLE` para adicionar as colunas `uf` e `regiao`.
* **Atualização de Dados (UPDATE)**:
  * `exercicio5.py`: Um script robusto que utiliza listas paralelas contendo as siglas (UF) e as regiões. O código itera sobre estas listas e executa comandos `UPDATE` para preencher as novas colunas criadas no passo anterior. *(Nota: O ficheiro `exercicio7.py` encontra-se unificado nesta lógica).*
* **Consultas e Filtros (DQL)**:
  * `exercicio2.py`: Realiza um `SELECT` simples, demonstrando o uso do método `fetchone()` para extrair e apresentar o primeiro registo encontrado.
  * `exercicio3.py`: Implementa um menu interativo no terminal, permitindo consultar a tabela ordenando os dados por ordem alfabética ou por tamanho da população através da cláusula `ORDER BY`.
  * `exercicio6.py`: Filtra a base de dados recebendo a sigla do estado (`uf`) via input, utilizando formatação `upper()` para garantir a integridade da pesquisa.
  * `exercicio8.py`: Realiza buscas agrupadas por região, aplicando a função `title()` para sanitizar o input antes de executar a query.
* **Agregação e Lógica de Negócio**:
  * `exercicio9.py`: Utiliza uma função customizada `qtd()` que recebe a região, executa um `SELECT` e utiliza a função nativa `len()` sobre o resultado do `fetchall()` para contar quantos estados pertencem àquela região.
  * `exercicio10.py`: Demonstração de extremidades lógicas, utilizando `ORDER BY populacao desc` e `asc` combinados com `fetchone()` para descobrir o estado mais e menos populoso do Brasil diretamente pelo motor do banco.
  * `exercicio11.py`: Algoritmo de soma populacional. Utiliza uma função e um laço de repetição (`for`) para iterar sobre todas as regiões do Brasil e realizar a soma acumulada da população dos estados correspondentes.
* **Ficheiro Físico**:
  * `brasil.db`: O ficheiro binário gerado pelo motor SQLite que retém a persistência total dos dados inseridos ao longo das aulas.

## Tecnologias e Paradigmas

* **Linguagem**: Python 3.x.
* **Base de Dados**: SQLite 3.
* **Conceitos Aplicados**:
  * Execução de queries SQL encapsuladas em strings.
  * Manipulação de cursores de ligação (`conexao.cursor()`) e comutação de transações (`conexao.commit()`).
  * Funções de agregação manipuladas no lado da aplicação em Python (iteração de tuplas e somas acumulativas).

---

Estes scripts foram concebidos como atividades práticas e progressivas para a disciplina de **Linguagem de Programação III**, ministrada pelo Prof. Guilherme da Silva Xavier no ensino técnico durante o ano de 2018.

