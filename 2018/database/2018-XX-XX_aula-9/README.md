# Estrutura do Banco de Dados - Gestão Escolar

Este diretório armazena o arquivo binário do banco de dados relacional local responsável por suportar os módulos de autenticação e catalogação do sistema de [Gestão Escolar](../../programming/2018-XX-XX_aula-9/)..

A base foi estruturada utilizando o motor SQLite 3 para garantir a persistência das informações manipuladas via interface gráfica.

## Estrutura das Tabelas

O banco de dados é composto por duas tabelas principais independentes:

* **Tabela `acesso`**: armazena as credenciais de usuários com permissão de entrada no sistema.
  - `id` (Integer): Chave primária com incremento automático (`PRIMARY KEY AUTOINCREMENT`).
  - `usuario` (Text): Nome de usuário para validação no login.
  - `senha` (Text): Senha associada (gravada a partir de campos mascarados).

* **Tabela `alunos`**: armazena os registros cadastrais dos estudantes matriculados.
  - `id` (Integer): Chave primária com incremento automático (`PRIMARY KEY AUTOINCREMENT`).
  - `nome` (Text): Nome completo do estudante.
  - `cidade` (Text): Município de residência.
  - `curso` (Text): Curso técnico escolhido (Informática, Eletromecânica ou Edificações).

---

O arquivo binário `escola.db` foi gerado e populado diretamente por scripts Python durante as atividades práticas da disciplina de Linguagem de Programação III.
