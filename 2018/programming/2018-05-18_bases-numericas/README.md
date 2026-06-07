# Validador de Bases Numéricas (Android)

Este projeto consiste em uma aplicação móvel experimental desenvolvida para a plataforma Android. 
O objetivo principal do aplicativo é validar se uma determinada sequência de caracteres inserida pelo usuário corresponde aos padrões sintáticos de diferentes bases numéricas (Decimal, Binária, Octal e Hexadecimal) através do uso de expressões regulares (Regex).

O ecossistema marca a evolução dos estudos práticos para o ambiente de desenvolvimento mobile nativo.

## Funcionamento

* **Interface e Captura de Dados (`MainActivity.java`)**: A tela principal renderiza um campo de captura de texto (`EditText`) para a inserção do número e um conjunto de botões de seleção exclusiva (`RadioButton`) para a escolha da base numérica alvo.
* **Mecanismo de Validação (Regex)**: O núcleo lógico utiliza a API nativa do Java (`java.util.regex.Pattern` e `java.util.regex.Matcher`) para processar e validar as entradas em tempo real com base em máscaras específicas:
  - **Decimal**: Validado através da expressão `^\d+$` (aceita apenas dígitos de 0 a 9).
  - **Binário**: Validado através da expressão `[01]+` (aceita estritamente os dígitos 0 e 1).
  - **Octal**: Validado através da expressão `[0-7]+` (aceita apenas dígitos de 0 a 7).
  - **Hexadecimal**: Validado através da expressão `[0-9A-F]+` (aceita dígitos de 0 a 9 e letras maiúsculas de A a F).
* **Feedback de Interface**: Ao disparar a ação do botão principal, o sistema executa o método `matches()` comparando o alvo com a expressão regular correspondente e atualiza dinamicamente um rótulo de texto (`TextView`) exibindo as mensagens *"Informação válida!"* ou *"Informação inválida!"*.

## Tecnologias e Configurações

* **Ambiente Mobile**: Android SDK compilado utilizando a API 26 (Android 8.0 Oreo) como alvo de compatibilidade, conforme mapeado no arquivo de build.
* **Linguagem de Programação**: Java focado em desenvolvimento mobile nativo e manipulação de árvores de componentes de interface (`findViewById`).
* **Gerenciador de Dependências**: Gradle (`build.gradle`) estruturado com suporte a bibliotecas de retrocompatibilidade (`appcompat-v7`) e layouts flexíveis (`constraint-layout`).
* **Suíte de Testes**: Infraestrutura padrão configurada para testes de unidade locais (`JUnit 4`) e testes instrumentados automatizados na interface do dispositivo (`Espresso`).

---

O projeto foi desenvolvido como atividade prática para a cadeira de **Programacao para Dispositivos Moveis**.
