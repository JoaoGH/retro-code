# Calculadora Básica (Android)

Este projeto consiste numa aplicação móvel simples desenvolvida para a plataforma Android. 
O objetivo do sistema é simular o comportamento de uma calculadora padrão, permitindo realizar as quatro operações aritméticas fundamentais (adição, subtração, multiplicação e divisão).

O código representa a continuidade da exploração do ecossistema de desenvolvimento mobile nativo, com foco na manipulação de eventos de cliques e gestão de estado de variáveis visuais.

## Funcionamento

* **Interface e Captura de Eventos (`MainActivity.java`)**: A aplicação utiliza botões na interface gráfica para capturar os números e os operadores matemáticos selecionados pelo utilizador. Estes dados são concatenados e exibidos em tempo real num componente de texto (`txtOperando`), formando a expressão visual da conta.
* **Lógica de Operação**: O sistema atua dividindo a expressão em três partes: armazena o primeiro número (`sOperando1`), regista o operador matemático selecionado (`sOperacao`) e captura o segundo número inserido (`sOperando2`). Ao acionar o botão de igual, o resultado final é processado com recurso a conversões para `Double` e exibido de forma independente no `txtResultado`.
* **Validação e Tratamento**: O algoritmo possui regras de validação para impedir cálculos vazios. Caso o utilizador tente processar o resultado sem ter preenchido todos os operandos, o sistema bloqueia a execução e dispara uma notificação no ecrã (através de um `Toast` com uma mensagem humorística). Existe também um tratamento rudimentar para remoção de parênteses finais no segundo operando.

## Tecnologias e Configurações

* **Ambiente Mobile**: Android SDK compilado com o nível de API 26 (Android 8.0 Oreo), conforme mapeado no ficheiro de configuração do projeto.
* **Linguagem de Programação**: Java para desenvolvimento nativo, interagindo diretamente com os elementos da interface do telemóvel (`TextView`).
* **Gestor de Dependências e Build**: Gradle (`build.gradle`) estruturado para incluir bibliotecas de retrocompatibilidade (`appcompat-v7`).
* **Testes**: Infraestrutura pré-configurada para testes de unidade (`JUnit 4`) e instrumentação local.

---

O projeto consolida os fundamentos da lógica de programação orientada a eventos dentro da arquitetura de desenvolvimento para dispositivos móveis.
O projeto foi desenvolvido no dia 04/06/2018 como atividade prática para a cadeira de **Programacao para Dispositivos Móveis**.
