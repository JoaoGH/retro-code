# Interfaces Gráficas e Banco de Dados (Tkinter + SQLite)

Este diretório contém uma série de scripts que marcam a introdução ao desenvolvimento de aplicações Desktop em Python.
O objetivo principal foi criar interfaces gráficas interativas (GUI) utilizando a biblioteca `tkinter` e integrá-las diretamente a um banco de dados relacional local.

O projeto simula módulos de um sistema de gestão escolar, incluindo controle de acesso (login/cadastro) e catalogação de alunos.

## Estrutura e Funcionamento

Os ficheiros estão divididos entre scripts de configuração de banco, interfaces de negócio e algoritmos utilitários:

* **Configuração do Banco de Dados (DDL)**:
  * `exercicio1.py`: Instancia a tabela de credenciais `acesso`.
  * `exercicio3.py`: Instancia a tabela de matrículas `alunos`.
  * **Persistência**: Os dados são salvos fisicamente no arquivo externo [escola.db](../../database/2018-XX-XX_aula-9/).
* **Módulo de Autenticação**:
  * `cadUsuario.py`: Interface gráfica para cadastro de novos utilizadores. Utiliza a propriedade `show="*"` para mascarar as senhas inseridas.
  * `aula9.py`: Tela de Login. Captura os dados, realiza um `SELECT` comparativo no banco e retorna uma mensagem visual de *"Acesso liberado"* ou *"Acesso negado"*.
* **Módulo de Gestão de Alunos**:
  * `cadAlunos.py`: Formulário de matrícula. Demonstra o uso de botões de seleção única (`Radiobutton`) para a definição dinâmica do curso técnico do estudante.
  * `listarAlunos.py`: Painel de visualização avançada. Utiliza o componente `Listbox` para apresentar os dados extraídos do banco, permitindo reordenar a listagem dinamicamente por Nome ou por Curso através de consultas SQL controladas.
* **Utilitários e Algoritmos**:
  * `ex.py`: Script de prova de conceito (PoC) para testes de inserção em listas dinâmicas.
  * `data.py` e `data2.py`: Algoritmos de formatação cronológica que capturam strings numéricas e aplicam fatiamentos lógicos para transcrever datas por extenso.

## Tecnologias e Paradigmas

* **Linguagem**: Python 3.x.
* **Interface Gráfica (GUI)**: `tkinter` (Janelas, geometria absoluta com `.place()` e gerenciamento de estados de componentes).
* **Base de Dados**: SQLite 3 (DML e DQL).
* **Conceitos Aplicados**: Programação Orientada a Eventos (captura de cliques em botões disparando funções locais) e parametrização de queries SQL.

---

Estes scripts foram desenvolvidos como atividades práticas para a disciplina de **Linguagem de Programação III**, ministrada pelo Prof. Guilherme da Silva Xavier.
