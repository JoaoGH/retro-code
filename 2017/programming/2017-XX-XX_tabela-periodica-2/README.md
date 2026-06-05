# Tabela Periódica Digital II

Este projeto consiste em uma aplicação desktop interativa que renderiza uma Tabela Periódica completa utilizando a interface gráfica Java Swing.
O sistema funciona integrado a um banco de dados relacional para fornecer informações detalhadas e imagens de cada elemento químico selecionado.

Foi um trabalho desenvolvido em grupo junto a outros dois colegas.
Também foi um trabalho que abrangia mais de uma materia, sendo elas Linguagem de Programação II, Química e Análise Projetos Sistemas.

O ecossistema do projeto é composto por telas de visualização (`.java` e `.form`), uma classe utilitária de automatização e classes focadas na persistência e manipulação dos dados.

## Funcionamento

* **Interface Principal (`TabelaPeriodicaDigital2`)**: Uma janela maximizada que desenha o layout clássico da tabela periódica estruturada em blocos de componentes (`JPanel`). Cada elemento químico funciona como um botão interativo que captura o clique do usuário.
* **Persistência e Conexão (`Conecta`)**: Classe responsável por estabelecer a comunicação via JDBC com o banco de dados MySQL local (`jdbc:mysql://localhost:3306/tabela`), autenticando com o usuário padrão `root`.
* **Regras de Negócio e Consulta (`Metodos`)**: Centraliza as queries SQL. Ao receber o número atômico do elemento clicado, realiza a consulta dos atributos (massa, eletronegatividade, pontos de fusão/ebulição, aplicação técnica) e armazena os resultados temporariamente em variáveis estáticas.
* **Processamento de Imagens**: Como os dados são lidos do banco, o sistema faz uso da biblioteca legada `sun.misc.BASE64Decoder` dentro de um método conversor (`img64Converter`) para decodificar strings Base64 recuperadas do banco e transformá-las em componentes visuais (`ImageIcon`).
* **Tela de Detalhes (`test`)**: Uma janela secundária disparada após a consulta. Ela consome as variáveis estáticas mapeadas pela classe `Metodos` e popula dinamicamente campos de texto (`JTextArea`) e rótulos (`JLabel`), exibindo a ficha técnica e a imagem correspondente do elemento selecionado.
* **Script Utilitário (`preguica`)**: Um script auxiliar contendo um método `main` independente. Ele foi desenvolvido para automatizar testes de carga ou para gerar strings de formatação HTML em lote a partir dos primeiros 50 elementos do banco de dados, imprimindo os resultados direto no console.

---

O projeto, desenvolvido durante o segundo semestre de 2017, representa uma evolução significativa nos estudos de desenvolvimento técnico do ensino médio, unindo conceitos avançados de Programação Orientada a Objetos (POO), interfaces visuais complexas e integração com Sistemas Gerenciadores de Banco de Dados (SGBD).
