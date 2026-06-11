# Precobaixo

Este diretório contém o dump do banco de dados utilizado no sistema [Preco](../../programming/2018-05-06-preco/) (projeto de programação desenvolvido em 2018).

## Estrutura do Banco

O arquivo `precobaixo.sql` cria um banco de dados chamado `precobaixo` com duas tabelas principais:

### Tabela `produtos`

Armazena os produtos anunciados.

| Campo            | Tipo         | Descrição                          |
|------------------|--------------|------------------------------------|
| `idProduto`      | int(11)      | Chave primária, auto incremento    |
| `nomeProduto`    | varchar(255) | Nome do produto                    |
| `precoProduto`   | varchar(255) | Preço do produto                   |
| `vendedorProduto`| varchar(255) | Nome ou identificação do vendedor  |

### Tabela `usuarios`

Armazena os usuários do sistema (provavelmente para autenticação).

| Campo         | Tipo         | Descrição                          |
|---------------|--------------|------------------------------------|
| `idUser`      | int(11)      | Chave primária, auto incremento    |
| `nome`        | varchar(255) | Nome de usuário                    |
| `senha`       | varchar(255) | Senha (armazenada em texto plano)  |
| `cadastrado`  | int(11)      | Flag                               |


## Contexto de criação

O script foi desenvolvido no dia **06/05/2018** como parte da disciplina de Projeto e Desenvolvimento de Interfaces, ministrada pelo **Prof. Juliano Moreira**, no curso Técnico em Informática Integrado ao Ensino Médio do IFSul – Campus Sapiranga/RS.

Ver projeto de programação [`Preco`](../../programming/2018-05-06-preco/), que continha a interface e a lógica em PHP/HTML para interagir com essas tabelas.

