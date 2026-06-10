# Automação de E-mails (Python + SMTP)

Este projeto contém um script desenvolvido para simular um sistema de automação de envio de e-mails.
O objetivo principal da atividade foi compreender o funcionamento do protocolo SMTP (Simple Mail Transfer Protocol) e a comunicação segura (SSL) através da linguagem Python, integrando isso a um sistema rudimentar de cadastro de contatos via terminal.

## Estrutura e Funcionamento

O script opera em formato de menu interativo no console, sustentado por um laço de repetição (`while`), e divide-se em duas funções lógicas principais:

* **Cadastro de E-mails (`grava`)**:
  * Recebe o endereço de e-mail do usuário e realiza a gravação física no arquivo de texto `emails.txt`. O dado é salvo com um delimitador (`;`) para facilitar a leitura futura.
* **Módulo de Envio (`enviar`)**:
  * Realiza a leitura do arquivo `emails.txt`, utilizando fatiamento de strings (`[0:i.find(";")]`) para isolar os endereços.
  * **Integração SMTP**: O código contém um bloco de estudo (comentado) que demonstra a utilização da biblioteca nativa `smtplib`. O algoritmo estabelece uma conexão segura (`SMTP_SSL`) com o servidor do Gmail na porta 465, realiza a autenticação do remetente e estrutura o cabeçalho e o corpo da mensagem antes de disparar o e-mail (`sendmail`).

## Tecnologias e Paradigmas

* **Linguagem**: Python 3.x.
* **Bibliotecas**: `smtplib` (Comunicação de rede e disparo de e-mails).
* **Conceitos Aplicados**:
  * Manipulação de arquivos locais (File I/O) nos modos de leitura (`"r"`) e escrita (`"w"`).
  * Criação de menus interativos via CLI (Command Line Interface) utilizando laços `while` e condicionais encadeadas.
  * Tratamento de strings e delimitadores.

---

Este script foi desenvolvido como uma atividade de exploração tecnológica para a disciplina de **Linguagem de Programação III**, ministrada pelo Prof. Guilherme da Silva Xavier.
