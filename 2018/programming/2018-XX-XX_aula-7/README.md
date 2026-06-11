# Manipulação de Arquivos e Strings em Python

Este diretório contém uma série de scripts desenvolvidos para exercitar operações de entrada e saída (I/O) utilizando arquivos de texto puro (`.txt`) na linguagem Python. 

Os exercícios exploram a criação, gravação, leitura e filtragem de dados físicos, além de introduzir conceitos de formatação de strings e delimitadores (semelhante à estrutura de arquivos CSV).

## Conteúdo e Funcionamento

Os scripts estão divididos em dois grandes blocos lógicos estruturados em torno da função nativa `open()`:

* **Geração e Filtragem Numérica**:
  * `aula7.py`: Script base que cria um arquivo `numeros.txt` em modo de escrita (`"w"`) e utiliza um laço de repetição para gravar os números de 1 a 500.
  * `exercicio2.py`: Cria dois arquivos distintos (`numpar.txt` e `numimpar.txt`), iterando de 1 a 500 e utilizando o operador de módulo (`%`) para separar e gravar os valores nos arquivos correspondentes.
  * `exercicio3.py`: Abre o arquivo de números pares em modo de leitura (`"r"`), converte as linhas lidas para inteiros e exibe no console apenas os múltiplos de 4.
  * `exercicio4.py`: Realiza a leitura do arquivo de números ímpares e grava em um novo arquivo (`multipl3.txt`) apenas os valores que são múltiplos de 3.
* **Cadastro e Manipulação de Strings (Delimitadores)**:
  * `exercicio5.py`: Simula um sistema de cadastro. Captura dados do usuário (nome, cidade, curso) 10 vezes e os grava no arquivo `lista.txt` separados por ponto e vírgula (`;`), criando um padrão de dados tabulares.
  * `exercicio7.py`: Lê o arquivo `lista.txt` e utiliza o método `find(";")` em conjunto com fatiamento de strings (slicing) para isolar e exibir no console apenas o "Nome" de todos os cadastros.
  * `exercicio6.py`: Evolução do exercício anterior que adiciona uma condicional para filtrar a leitura do arquivo, exibindo na tela apenas os nomes das pessoas que começam com a letra "G" ou "g".

## Tecnologias e Paradigmas

* **Linguagem**: Python 3.x.
* **Conceitos Aplicados**:
  * **File I/O**: Manipulação de streams de arquivos através dos modos `"r"` (Read), `"w"` (Write) e `"w+"` (Write/Read), e o fechamento seguro com `close()`.
  * **Interação e Casting**: Leitura sequencial de arquivos com `readlines()` e conversão de strings para inteiros com `int()`.
  * **Tratamento de Strings**: Uso de formatação clássica (`"%d\n" % linha`), concatenação, fatiamento (`[0:i.find(";")]`) e busca de caracteres (`find()`).

---

Estes scripts foram desenvolvidos como atividades de fixação para a disciplina de **Linguagem de Programação III**, ministrada pelo Prof. Guilherme da Silva Xavier durante o ano letivo de 2018.

