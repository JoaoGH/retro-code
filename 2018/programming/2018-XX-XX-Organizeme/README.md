# OrganizeMe - App de Produtividade (Android + Firebase)

Este projeto é um aplicativo móvel voltado para a organização pessoal, gestão de tarefas e notas.
Foi desenvolvido nativamente para Android como parte da disciplina de **Projetos II**, em parceria com **Eduardo de Cristo Meurer**.

O grande marco técnico desta aplicação é a transição do armazenamento de dados locais (SQLite) para a nuvem, utilizando os serviços de autenticação e banco de dados em tempo real do Google Firebase.

## Estrutura e Arquitetura do Projeto

O código-fonte reflete um amadurecimento na engenharia de software, separando as responsabilidades em pacotes lógicos bem definidos:

## Tecnologias e Configurações

* **Ambiente Mobile**: Android SDK estruturado via Gradle.
* **Linguagem**: Java Orientado a Objetos.
* **Backend como Serviço (BaaS)**:
  * **Firebase Authentication**: Gerenciamento seguro de identidades e sessões.
  * **Firebase Realtime Database**: Banco de dados NoSQL hospedado em nuvem para sincronização de dados em tempo real.
* **Permissões Críticas (`AndroidManifest.xml`)**: O sistema exige a permissão `android.permission.INTERNET` para estabelecer o túnel de comunicação com os servidores do Firebase.

---

O sistema foi concebido durante o ano letivo de 2018, marcando a exploração avançada de APIs de terceiros, computação em nuvem e segurança da informação no ambiente mobile.
