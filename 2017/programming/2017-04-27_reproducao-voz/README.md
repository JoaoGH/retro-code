# Reprodução de Voz

Este algoritmo foi desenvolvido para realizar a reprodução de arquivos de áudio utilizando a API nativa do Java (`javax.sound.sampled`).
O script foca no carregamento de um arquivo de som local e na sua execução controlada através de uma interface gráfica simples.

## Funcionamento

* **Carregamento do Áudio**: O sistema utiliza as classes `AudioSystem` e `AudioInputStream` para carregar um arquivo de áudio. É feita uma observação importante no código de que a API utilizada possui restrição de formato, não funcionando com arquivos `.mp3`, apenas com o formato `.wav`.
* **Controle de Reprodução**: A execução do som é gerenciada pelo objeto `Clip`. O método `oClip.loop(0)` é configurado para reproduzir o áudio exatamente uma vez. O código também deixa documentada a alternativa para reprodução contínua (em loop) utilizando `Clip.LOOP_CONTINUOUSLY`.
* **Interface de Bloqueio**: Como a reprodução do áudio ocorre em uma thread separada, o programa utiliza o `JOptionPane` dentro de uma thread do Swing (`SwingUtilities.invokeLater`) para exibir uma janela de diálogo com a mensagem *"Clique pra fechar!"*. Isso impede que o programa termine abruptamente antes do término da reprodução do som.

---

O script foi desenvolvido no dia 27/04/2017, marcando os estudos práticos em linguagem Java com foco em manipulação de arquivos multimídia e interface gráfica.
