# Estrutura do Banco de Dados - Catálogo de Livros

Este diretório armazena o script de banco de dados relacional responsável por dar suporte de persistência e permitir buscas complexas no sistema [Catálogo de Livros (MVC)](../../programming/2018-06-04-interfacesMVC/).

O script configura a estrutura relacional e insere registros iniciais de teste para validação dos filtros da aplicação.

## Funcionamento e Estrutura

* **Script SQL (`livro.sql`)**: Arquivo de dump estruturado gerado via phpMyAdmin contendo comandos DDL e DML prontos para execução.
* **Tabela `info`**: Entidade central encarregada de centralizar os metadados das obras literárias catalogadas. Seus campos estão mapeados da seguinte forma:
  - `id` (Int): Chave primária com incremento automático (`AUTO_INCREMENT`).
  - `titulo` (Varchar): Título completo do livro, configurado com charset binário para preservação de caixas de texto.
  - `ano` (Int): Ano de publicação da obra (formato YYYY).
  - `autor`, `autor2` e `autor3` (Varchar): Campos independentes que permitem indexar e atribuir a autoria a até três escritores distintos por obra.
  - `editora` (Varchar): Nome da companhia responsável pela publicação da edição.

---

O esquema foi projetado e exportado localmente utilizando um servidor MySQL (v5.7.21) integrado ao ambiente phpMyAdmin no dia 29/05/2018, servindo de base para os desafios práticos de divisão arquitetural em PHP.

