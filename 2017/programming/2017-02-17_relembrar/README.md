# Cálculo de Salário com Abono Progressivo

Este algoritmo realiza o cálculo do salário final de um funcionário com base no tempo de serviço (em meses),
aplicando um abono que aumenta progressivamente a cada ano completo trabalhado.

Serviu para relembrar o ano anterior.

O código utiliza uma estrutura de repetição para calcular o reajuste acumulado:
- O abono inicial é de 10% (0.1).
- A cada 12 meses (1 ano) de trabalho, o salário é recalculado e a taxa de abono recebe um incremento de mais 10% para o ciclo seguinte.

## Funcionamento

1. **Entradas**: O usuário informa a quantidade de meses trabalhados e o valor do salário base.
2. **Processamento**: 
   - O tempo é convertido de meses para anos.
   - Um laço `for` percorre cada ano calculado, aplicando o abono atual ao salário e atualizando a taxa de abono para o próximo ano.
3. **Saída**: Exibe o valor do salário final após todos os reajustes acumulados.

---

O script foi desenvolvido no dia 17/02/2017, dando continuidade aos estudos de lógica e linguagem C++ iniciados nos anos anteriores.
