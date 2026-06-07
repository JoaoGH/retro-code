# Sistema de Catálogo de Livros (Arquitetura MVC)

Este projeto consiste em um sistema web para cadastro, catalogação e pesquisa de obras literárias, desenvolvido utilizando o padrão de arquitetura de software **MVC (Model-View-Controller)**. 
A aplicação adota uma abordagem assíncrona baseada em requisições nativas (AJAX), eliminando a necessidade de recarregamento de página para listagem ou inserção de dados.

O objetivo central do projeto foi exercitar a separação completa de conceitos (SoC), separando a interface gráfica das regras de controle e das conexões de persistência.

## Estrutura do Padrão MVC

Seguindo a lógica de isolamento de camadas, os componentes originais foram distribuídos em pastas dedicadas, limpando os sufixos identificadores de seus nomes físicos:

* **`model/` (Camada de Dados)**: Realiza a conexão persistente com a base local via `mysqli` (`conectar.php`) e gerencia a execução de queries SQL (`cadastrar.php` e `ver.php`). Ele consome a estrutura de dados mapeada no script externo [livro.sql](../../database/2018-05-29-interfacesMVC/livro.sql).
* **`view/` (Camada Visual)**: Centraliza as interfaces de interação estruturadas em HTML5 e Bootstrap 4 (Template Landing Page), como o painel de buscas, formulários e listagens em cards responsivos (`mostraIndex.php`, `mostraLivro.php` e `cadastrar.php`).
* **`controller/` (Camada de Controle)**: Funciona como a ponte lógica do sistema. Intercepta as chamadas HTTP, realiza tratamentos de codificação (`utf8_decode`), aciona os scripts do modelo e injeta os resultados de volta na visão (`cadLivros.php`, `verLivros.php` e o script de comportamento `rapido.js`).

## Funcionamento

* **Gestão Dinâmica de Autoria**: O formulário suporta múltiplos autores por livro. O script utilitário `rapido.js` monitora elementos de seleção (`checkbox`) e ativa ou desativa dinamicamente os inputs de segundo e terceiro autor no DOM, validando regras de obrigatoriedade de preenchimento em tempo real.
* **Comunicação Assíncrona (AJAX)**: A gravação e a atualização da listagem de busca utilizam o objeto nativo `XMLHttpRequest`. Isso permite submeter os dados em segundo plano e renderizar o HTML gerado pelo controlador diretamente na interface gráfica de maneira instantânea.
* **Busca Expandida com Operador `LIKE`**: O script de pesquisa compara o termo enviado pelo usuário simultaneamente com as colunas de título, ano, editora e com todos os três campos de autores mapeados na tabela `info`, exibindo resultados altamente abrangentes.

## Tecnologias e Ferramentas

* **Frontend**: HTML5, CSS3, Bootstrap 4 e JavaScript Nativo (Vanilla AJAX).
* **Backend**: PHP 7.x estruturado de forma estritamente modular sob o padrão MVC.
* **Banco de Dados**: MySQL (Apoiado pelo esquema relacional integrado).

---

O projeto representa a consolidação prática de engenharia de software e arquiteturas modulares web desenvolvidas no dia 04/06/2018 para a cadeira de **Projeto e Desenvolvimento de Interfaces**, sob a instrução do Prof. Juliano Moreira.

---



# [Start Bootstrap - Landing Page](https://startbootstrap.com/template-overviews/landing-page/)

[Landing Page](http://startbootstrap.com/template-overviews/landing-page/) is a multipurpose landing page template for [Bootstrap](http://getbootstrap.com/) created by [Start Bootstrap](http://startbootstrap.com/).

## Preview

[![Landing Page Preview](https://startbootstrap.com/assets/img/templates/landing-page.jpg)](https://blackrockdigital.github.io/startbootstrap-landing-page/)

**[View Live Preview](https://blackrockdigital.github.io/startbootstrap-landing-page/)**

## Status

[![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://raw.githubusercontent.com/BlackrockDigital/startbootstrap-landing-page/master/LICENSE)
[![npm version](https://img.shields.io/npm/v/startbootstrap-landing-page.svg)](https://www.npmjs.com/package/startbootstrap-landing-page)
[![Build Status](https://travis-ci.org/BlackrockDigital/startbootstrap-landing-page.svg?branch=master)](https://travis-ci.org/BlackrockDigital/startbootstrap-landing-page)
[![dependencies Status](https://david-dm.org/BlackrockDigital/startbootstrap-landing-page/status.svg)](https://david-dm.org/BlackrockDigital/startbootstrap-landing-page)
[![devDependencies Status](https://david-dm.org/BlackrockDigital/startbootstrap-landing-page/dev-status.svg)](https://david-dm.org/BlackrockDigital/startbootstrap-landing-page?type=dev)

## Download and Installation

To begin using this template, choose one of the following options to get started:
* [Download the latest release on Start Bootstrap](https://startbootstrap.com/template-overviews/landing-page/)
* Install via npm: `npm i startbootstrap-landing-page`
* Clone the repo: `git clone https://github.com/BlackrockDigital/startbootstrap-landing-page.git`
* [Fork, Clone, or Download on GitHub](https://github.com/BlackrockDigital/startbootstrap-landing-page)

## Usage

### Basic Usage

After downloading, simply edit the HTML and CSS files included with the template in your favorite text editor to make changes. These are the only files you need to worry about, you can ignore everything else! To preview the changes you make to the code, you can open the `index.html` file in your web browser.

### Advanced Usage

After installation, run `npm install` and then run `gulp dev` which will open up a preview of the template in your default browser, watch for changes to core template files, and live reload the browser when changes are saved. You can view the `gulpfile.js` to see which tasks are included with the dev environment.

## Bugs and Issues

Have a bug or an issue with this template? [Open a new issue](https://github.com/BlackrockDigital/startbootstrap-landing-page/issues) here on GitHub or leave a comment on the [template overview page at Start Bootstrap](http://startbootstrap.com/template-overviews/landing-page/).

## Custom Builds

You can hire Start Bootstrap to create a custom build of any template, or create something from scratch using Bootstrap. For more information, visit the **[custom design services page](https://startbootstrap.com/bootstrap-design-services/)**.

## About

Start Bootstrap is an open source library of free Bootstrap templates and themes. All of the free templates and themes on Start Bootstrap are released under the MIT license, which means you can use them for any purpose, even for commercial projects.

* https://startbootstrap.com
* https://twitter.com/SBootstrap

Start Bootstrap was created by and is maintained by **[David Miller](http://davidmiller.io/)**, Owner of [Blackrock Digital](http://blackrockdigital.io/).

* http://davidmiller.io
* https://twitter.com/davidmillerskt
* https://github.com/davidtmiller

Start Bootstrap is based on the [Bootstrap](http://getbootstrap.com/) framework created by [Mark Otto](https://twitter.com/mdo) and [Jacob Thorton](https://twitter.com/fat).

## Copyright and License

Copyright 2013-2018 Blackrock Digital LLC. Code released under the [MIT](https://github.com/BlackrockDigital/startbootstrap-landing-page/blob/gh-pages/LICENSE) license.
