# Sistema de Catálogo de Livros (Arquitetura MVC)

Este projeto consiste em um sistema web para cadastro e pesquisa de obras literárias, estruturado rigorosamente sob o padrão de arquitetura **MVC (Model-View-Controller)**. 
A aplicação utiliza requisições assíncronas (AJAX) para realizar operações no banco de dados sem a necessidade de recarregar a página, proporcionando uma experiência de usuário fluida e dinâmica baseada no template *Landing Page* (Start Bootstrap).

A grande evolução técnica deste projeto é a separação completa de responsabilidades: a interface visual, as regras de persistência e o fluxo de controle de dados ficam isolados em seus respectivos diretórios.

## Estrutura do Padrão MVC

Os arquivos estão organizados logicamente em camadas independentes, eliminando os sufixos identificadores de seus nomes físicos:

* **`model/` (Camada de Dados)**: Responsável pela conexão com o SGBD MySQL (`conectar.php`) utilizando a extensão `mysqli` e pela execução direta das instruções SQL de inserção (`cadastrar.php`) e consultas com filtros dinâmicos de busca (`ver.php`).
* **`view/` (Camada Visual)**: Centraliza a interface com o usuário (`mostraIndex.php`), estruturando os formulários de entrada, inputs dinâmicos com caixas de seleção para múltiplos autores e layouts responsivos baseados em Bootstrap 4.
* **`controller/` (Camada de Controle)**: Gerencia o fluxo da aplicação. Recebe os dados enviados via requisições HTTP, realiza o tratamento de codificação de caracteres (`utf8_decode`), faz a ponte com as regras do modelo e devolve as respostas estruturadas em HTML para a visão (`cadLivros.php` e `verLivros.php`).

## Funcionamento

* **Validação Dinâmica de Autores**: No frontend, o script utilitário `rapido.js` monitora o estado de caixas de seleção (`checkbox`). A função `habilita()` bloqueia ou libera dinamicamente os campos de texto para segundo e terceiro autor conforme a necessidade do preenchimento, garantindo a integridade visual do formulário.
* **Cadastro Assíncrono (AJAX)**: Ao submeter um novo livro, a função `cadLivros()` intercepta o evento, monta os parâmetros encapsulados e dispara uma requisição `XMLHttpRequest` do tipo `POST` em segundo plano. O controlador processa a persistência e o cliente recebe um feedback imediato em tela em caso de sucesso.
* **Mecanismo de Busca Inteligente**: A pesquisa opera de forma abrangente através do arquivo `ver.php`. Uma única string enviada pelo usuário é comparada via operador `LIKE` em múltiplos campos simultaneamente (título, ano, editora e todos os três autores mapeados), listando os resultados em cards responsivos organizados por prioridade.

## Tecnologias e Ferramentas

* **Frontend**: HTML5, CSS3, Bootstrap 4, JavaScript Nativo (Vanilla AJAX para manipulação assíncrona do DOM).
* **Backend**: PHP 7.x estruturado sob o paradigma de arquitetura de software MVC e conectividade baseada em objetos via **MySQLi**.
* **Banco de Dados**: MySQL (Tabela `info` configurada com suporte a múltiplos indexadores de autoria).

---

O projeto consolida o aprendizado prático de engenharia de software e padrões de projetos arquiteturais na web.
O projeto foi desenvolvido no dia 30/05/2018 como atividade prática para a cadeira de **Projeto e Desenvolvimento de Interfaces**, ministrada pelo Prof. Juliano Moreira.

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
