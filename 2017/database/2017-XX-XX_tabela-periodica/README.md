


# Estrutura do Banco de Dados - Tabela Periódica

Este diretório contém o script de banco de dados relacional que sustenta e fornece dados em tempo real para a aplicação desktop [Tabela Periódica Digital II](../../programming/2017-XX-XX_TabelaPeriodicaDigital2/).

O arquivo realiza o setup completo da estrutura relacional e popula os atributos físicos, químicos e visuais de cada elemento mapeado.

## Funcionamento e Estrutura

* **Script SQL (`tabela.sql`)**: Arquivo de dump gerado via phpMyAdmin estruturado com blocos DDL (Data Definition Language) e DML (Data Manipulation Language).
* **Tabela `elementos`**: Entidade central do esquema que mapeia a ficha técnica dos elementos químicos. Os campos principais incluem:
  - `numeroAtomico` (Inteiro): Identificador numérico e chave de consulta da aplicação Java.
  - `nome` e `simbolo` (Varchar): Identificação textual do elemento.
  - Atributos Físicos (Double): Campos dedicados para `massa`, `eletronegatividade`, `densidade`, `pFusao` (Ponto de Fusão) e `pEbulicao` (Ponto de Ebulição).
  - `aplicacoes` e `descImagem` (Text): Textos descritivos sobre o uso comercial/científico e detalhes visuais.
  - `img64` (Longtext): Campo de texto longo contendo buffers de imagens completamente codificados em strings Base64, permitindo salvar os arquivos visuais direto nos registros da tabela.

---

O banco de dados foi gerado localmente em um servidor MySQL (v5.7.14) integrado ao pacote WampServer/XAMPP durante o Ensino Médio Técnico em Informática.
