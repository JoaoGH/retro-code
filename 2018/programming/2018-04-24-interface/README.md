# Sistema de Autenticação e Interface Dinâmica

Este projeto consiste em uma aplicação web experimental desenvolvida a partir da customização do tema clássico *Freelancer* (Start Bootstrap v4.0.0).
O objetivo principal do projeto foi a criação de uma interface dinâmica com controle de visualização no lado do cliente e um fluxo simples de autenticação de usuários no backend.

O ecossistema combina estilização responsiva moderna com controle rudimentar de sessões em PHP.

## Funcionamento

* **Interface Interativa (`index.php`)**: Página principal estruturada com Bootstrap 4 e jQuery. Utiliza funções em JavaScript puro (`inicio()` e `aparece()`) para manipular propriedades de exibição (`display: none/block`) de elementos HTML em tempo real, permitindo alternar entre as seções de Login e Cadastro sem a necessidade de recarregar a página.
* **Fluxo de Cadastro (`cadUser.php`)**: Uma interface complementar que simula o envio de dados cadastrais, utilizando inputs ocultos contendo credenciais predefinidas para fins de teste técnico.
* **Mecanismo de Validação (`test.php`)**: Script PHP responsável por processar as requisições `POST` dos formulários. Ele utiliza arrays estáticos em memória para emular um banco de dados de usuários:
  - Usuário padrão: `adm`
  - Senha padrão: `123`
  - Caso as credenciais coincidam, inicia uma sessão ativa (`$_SESSION['login'] = 'ok'`) e redireciona o usuário para a área restrita.
  - Se os dados forem inválidos, devolve o usuário para a tela inicial injetando um parâmetro de erro via query string (`?retorno=Dados inválidos`).
* **Área Protegida (`perfil.php`)**: Página de destino após um login bem-sucedido, confirmando o sucesso da autenticação do usuário.
* **Módulo de Contato (`contact_me.js` e `contact_me.php`)**: Integração herdada do template original que utiliza chamadas assíncronas via AJAX (`$.ajax`) para validar e disparar e-mails locais a partir do formulário de contato.

## Tecnologias e Ferramentas

* **Frontend**: HTML5, CSS3 (Sass), Bootstrap v4.0.0, Font Awesome v4.7.0 e jQuery v3.3.1.
* **Backend**: PHP 5.6 (Lógica procedural e controle de sessões nativas).
* **Automação/Build**: Ferramentas baseadas em Node.js mapeadas via `package.json`, utilizando Gulp para minificação de arquivos e BrowserSync para sincronização do servidor de desenvolvimento local.

---

O projeto foi desenvolvido no dia 24/04/2018 como atividade prática para a cadeira de **Projeto e Desenvolvimento de Interfaces**, ministrada pelo Prof. Juliano Moreira.


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
