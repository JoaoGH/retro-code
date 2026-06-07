# Sistema Preço Baixo II (Versão MySQLi)

Este projeto representa uma evolução direta e uma refatoração do sistema colaborativo [Preço Baixo](../2018-05-06-preco/).
Mantendo a proposta original de uma plataforma de compartilhamento e pesquisa de preços baseada no template *Freelancer*, esta versão foca na modernização da arquitetura do backend e no refinamento das regras de negócio usando interações dinâmicas entre PHP e JavaScript.

## Evolução e Melhorias Técnicas

* **Migração para API MySQLi**: A principal mudança estrutural foi a substituição completa da extensão legada `mysql_*` pela API `mysqli` (`new mysqli(...)`). Toda a execução de queries e a manipulação de resultados foi atualizada para o modelo baseado em objetos (`$conexao->query($q)`), garantindo maior compatibilidade com versões mais recentes do PHP.
* **Validação Dinâmica no Cliente (JavaScript)**: A lógica de restrição (bloqueio do botão de pesquisa até o cadastro de 5 produtos) agora é controlada de forma híbrida. O backend injeta a quantidade de cadastros realizados via query string (`?qtd=$cad`), que é capturada por um input oculto (`<input type='hidden' id='hidden'>`). Ao carregar a página, a função JavaScript `teste()` avalia esse valor e altera dinamicamente a propriedade `disabled` do botão de pesquisa diretamente no navegador do usuário.
* **Otimização do Banco de Dados e Cadastro (`cadPrecoBanco.php`)**: O script de inserção foi simplificado e reestruturado. O sistema agora mapeia os produtos inseridos (`computador`, `geladeira`, `roupeiro`, etc.) a índices numéricos de imagem (`img`) salvos diretamente no banco, otimizando o carregamento visual subsequente na tela de buscas (`pesqPreco.php`).
* **Modularização Sustentada**: O reaproveitamento de componentes visuais através dos arquivos `head.php` e `fimBody.php` permanece centralizado, assegurando uma folha de estilos limpa e unificada para todas as telas do sistema (Login, Cadastro, Perfil e Pesquisa).

## Tecnologias e Ferramentas

* **Frontend**: HTML5, CSS3, Bootstrap v4.0.0, jQuery v3.3.1 e JavaScript Nativo (Manipulação de DOM no carregamento da página).
* **Backend**: PHP 5.6 / 7.x utilizando a extensão **MySQLi** para persistência de dados e controle de Sessões nativas.
* **Banco de Dados**: MySQL (Esquema relacional atualizado com suporte a contadores de produtos).
* **Automação/Build**: Gerenciamento de dependências e tarefas via Node.js (`package.json`) com suporte a Gulp e BrowserSync.

---

O projeto demonstra o processo de refatoração de código, realizado dia 07/05/2018, e a evolução de arquitetura de software estudados na cadeira de **Segurança da Informação**, aplicando boas práticas de conectividade e manipulação dinâmica de interfaces. Essa matéria foi ministrada pelo Prof. Juliano Moreira.

---


# [Start Bootstrap - Freelancer](https://startbootstrap.com/template-overviews/freelancer/)

[Freelancer](http://startbootstrap.com/template-overviews/freelancer/) is a one page freelancer portfolio theme for [Bootstrap](http://getbootstrap.com/) created by [Start Bootstrap](http://startbootstrap.com/). This theme features several content sections, a responsive portfolio grid with hover effects, full page portfolio item modals, and a working PHP contact form.

## Preview

[![Freelancer Preview](https://startbootstrap.com/assets/img/templates/freelancer.jpg)](https://blackrockdigital.github.io/startbootstrap-freelancer/)

**[View Live Preview](https://blackrockdigital.github.io/startbootstrap-freelancer/)**

## Status

[![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://raw.githubusercontent.com/BlackrockDigital/startbootstrap-freelancer/master/LICENSE)
[![npm version](https://img.shields.io/npm/v/startbootstrap-freelancer.svg)](https://www.npmjs.com/package/startbootstrap-freelancer)
[![Build Status](https://travis-ci.org/BlackrockDigital/startbootstrap-freelancer.svg?branch=master)](https://travis-ci.org/BlackrockDigital/startbootstrap-freelancer)
[![dependencies Status](https://david-dm.org/BlackrockDigital/startbootstrap-freelancer/status.svg)](https://david-dm.org/BlackrockDigital/startbootstrap-freelancer)
[![devDependencies Status](https://david-dm.org/BlackrockDigital/startbootstrap-freelancer/dev-status.svg)](https://david-dm.org/BlackrockDigital/startbootstrap-freelancer?type=dev)

## Download and Installation

To begin using this template, choose one of the following options to get started:
* [Download the latest release on Start Bootstrap](https://startbootstrap.com/template-overviews/freelancer/)
* Install via npm: `npm i startbootstrap-freelancer`
* Clone the repo: `git clone https://github.com/BlackrockDigital/startbootstrap-freelancer.git`
* [Fork, Clone, or Download on GitHub](https://github.com/BlackrockDigital/startbootstrap-freelancer)

## Usage

### Basic Usage

After downloading, simply edit the HTML and CSS files included with the template in your favorite text editor to make changes. These are the only files you need to worry about, you can ignore everything else! To preview the changes you make to the code, you can open the `index.html` file in your web browser.

### Advanced Usage

After installation, run `npm install` and then run `gulp dev` which will open up a preview of the template in your default browser, watch for changes to core template files, and live reload the browser when changes are saved. You can view the `gulpfile.js` to see which tasks are included with the dev environment.

#### Gulp Tasks

- `gulp` the default task that builds everything
- `gulp dev` browserSync opens the project in your default browser and live reloads when changes are made
- `gulp sass` compiles SCSS files into CSS
- `gulp minify-css` minifies the compiled CSS file
- `gulp minify-js` minifies the themes JS file
- `gulp copy` copies dependencies from node_modules to the vendor directory

## Bugs and Issues

Have a bug or an issue with this template? [Open a new issue](https://github.com/BlackrockDigital/startbootstrap-freelancer/issues) here on GitHub or leave a comment on the [template overview page at Start Bootstrap](http://startbootstrap.com/template-overviews/freelancer/).

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

Copyright 2013-2018 Blackrock Digital LLC. Code released under the [MIT](https://github.com/BlackrockDigital/startbootstrap-freelancer/blob/gh-pages/LICENSE) license.
