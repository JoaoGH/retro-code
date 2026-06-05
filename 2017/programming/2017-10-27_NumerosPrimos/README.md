# Gerador de Números Primos

Este projeto consiste em um algoritmo com interface gráfica (GUI) desenvolvido em Java Swing para identificar e listar números primos até um determinado limite estipulado pelo usuário.

O sistema calcula os números primos de forma iterativa e, além de exibi-los na tela, realiza a persistência desses dados salvando-os em um arquivo de texto local.

## Funcionamento

* **Interface Gráfica (Swing)**: O usuário interage com uma janela (`Frame.java` / `Frame.form`) onde define o valor limite utilizando um componente de seleção (`JSpinner`) e dispara o cálculo através do botão "Gerar Primos".
* **Cálculo dos Primos**: A classe de negócio `NumerosPrimos.java` encapsula a lógica matemática. Através de dois laços `for` encadeados, o algoritmo valida a quantidade de divisores exatos de cada número até o limite estabelecido. Se o número possuir exatamente 2 divisores (1 e ele mesmo), é classificado como primo.
* **Escrita em Arquivo e Tela**: À medida que os números primos são identificados, o sistema:
  1. Incrementa um contador geral exibido na tela.
  2. Grava os números em lote diretamente em um arquivo físico chamado `numerosPrimos.txt` utilizando as classes `FileWriter` e `PrintWriter`.
  3. Alimenta uma área de texto (`JTextArea`) para exibição imediata dos resultados na interface.

---

O script foi desenvolvido no dia 27/10/2017, como parte dos estudos de Programação Orientada a Objetos e interfaces gráficas em Java.
