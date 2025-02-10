# Trabalho 

Lista de exercícios para serem entregues. Foi desenvolvida no dia 17/03/2016 na cadeira de Banco de dados.

## Enunciados

Importe a tabela livros do Access para o MySQL
 
Para responder as questões abaixo: 
Utilize: apostilaSQL.doc 
Utilize: SQL-Query do MySQLFront e o Banco de Dados livros.


1.	Liste o nome de todos os campos da tabela livros
2.	Liste código, nome, autor e preco do livro que tem código  igual  a  40
3.	Liste o nome dos livros que comecem pela letra ‘ C ’
4.	Liste o nome, autor e preco de todos os livros cujo nome do autor começa com a letra ‘A ’
5.	Liste o nome, autor, preco dos livros cuja categoria é informática
6.	Liste o nome, autor, preco, paginas e categoria dos livros cuja categoria é igual a Informática ou Administração  
7.	Liste nome, autor, preco, categoria, subcategoria dos livros que custam menos que R$20,00  
8.	Liste nome e preco dos livros que custam R$ 60,00 ou mais
9.	Liste todos os nomes e precos dos livros que custam entre R$45,00 e R$55,00 inclusive
10.	Liste o nome, autor, preço e subcategoria dos livros que possuem em seu nome a string ‘Estudo’
11.	Conte quantos registros existem cadastrados na tabela livros
12.	Liste em ordem decrescente os nomes dos autores dos livros
13.	Liste os nomes dos livros que tenham seu nome terminado pela string  ‘97’ 
14.	Liste todas as informações dos livros que tenham a terceira letra do nome igual a “S”
15.	Conte quantos livros são da subcategoria geral
16.	Some os precos dos livros da subcategoria geral
17.	Liste o nome, autor e preco do livros em que o nome dos livros possuam a string ‘Dirigido’
18.	Liste o nome do livros e preco onde o codigo seja igual a 7
19.	Liste todos os campos da tabela livros em que o preco esteja entre R$60,00 e R$65,00 inclusive
20.	Liste codigo, nome, autor, preco categoria ordenando-os de A até Z pelo campo nome
21.	Liste o preco do livro que tem o menor preço
22.	Liste as 5 primeiras linhas da tabela livros e os campos nome, autor, preco dos livros ordenados de forma 
decrendente pelo campo nome
23.	Liste a média de preco de todos livros			
24.	Liste os nome e preco dos livros com um aumento de 10
25.	Liste nome, autor, preço, categoria dos livros com código entre 10 e 20 ordenados de maneira ascendente por codigo  
26. Cadastrar 10 livros utilizando o comando SQL .... insert into
27. Excluir o registro onde o codigo do livro é igual a 45
28. Excluir o registro onde o campo Autor é igual a “Ferdinando Natale”
29. Excluir o registro onde o campo Nome é igual a “Eletrônica”
30. Atualizar/Alterar o campo (comando SQL: update) preco para 80 onde o campo Nome é igual a “Curso Prático de Word 97”
e o campo Autor é igual a “Mário Gomes da Silva”
31. Excluir o registro onde o codigo é igual a 26
32. Atualizar/Alterar o campo (comando SQL: update) Autor colocando o seu nome e sobrenome no registro onde o código é 
igual a 7
33. Atualizar/Alterar o campo (comando SQL: update) Categoria colocando “Eletrônica” no registro onde o código é igual 
a 43
34. Excluir o registro onde o campo Autor é igual a “Fernanda Caetano de Gois”
35. Atualizar/Alterar o campo (comando SQL: update) preco reajustando em 20% todos registros onde a Categoria é igual a
“Técnicos”



### Respostas

1.	`select * from livros`
2.	`select codigo, nome, autor, preco from livros where codigo=40`
3.	`select nome from livros Where nome Like  'C%'`
4.	`select nome, autor, preco from livros Where autor Like  'A%'`
5.	`select nome, autor, preco, categoria from livros Where categoria='Informatica'`
6.	`select nome, autor, preco, paginas, categoria from livros Where categoria='Informatica' or categoria='Administracao'`
7.	`select nome, autor, preco, categoria, subcategoria from livros Where preco<20`
8.	`select nome, preco from livros Where preco>=60`
9.	`select nome, preco from livros Where preco>=45 and preco<=55`
10.	`select nome, autor, preco, subcategoria from livros Where nome Like  '%estudo%'`
11.	`select count(codigo) from livros`
12.	`select autor from livros order by autor desc`
13.	`select nome from livros where nome like '%97'`
14.	`select *from livros where nome like '__S%'`
15.	`select count(*) from livros where subcategoria='geral'`
16.	`select sum(preco) from livros where subcategoria='geral'`
17.	`select nome, autor, preco from livros where nome like '%dirigido%'`
18.	`select nome, preco from livros where codigo=7`
19.	`select *from livros where preco>=60 and preco<=65`
20.	`select codigo, nome, autor, preco, categoria from livros order by nome`
21.	`select  min(preco) from livros`
22.	`select  nome, autor, preco from livros order by nome desc limit 5`
23.	`select avg(preco) from livros`
24.	`select nome, preco+10 from livros`
25.	`select nome, autor, preco, categoria from livros where codigo>=10 and codigo<=20 order by código`
26.	`insert into livros (codigo, nome, autor, paginas, preco, categoria, subcategoria)`
<br> `VALUES (102, "Harry Potter e a Pedra Filosofal", "J. K. Rowlling", 263, 26, "Fantasia", "Magia")`
<br> `insert into livros (codigo, nome, autor, paginas, preco, categoria, subcategoria)`
<br> `VALUES (103, "Harry Potter e a Câmara Secreta", "J. K. Rowlling", 287, 26, "Fantasia", "Magia")`
<br> `insert into livros (codigo, nome, autor, paginas, preco, categoria, subcategoria)`
<br> `VALUES (104, "Harry Potter e o Prisioneiro de Azkaban", "J. K. Rowlling", 348, 26, "Fantasia", "Magia")`
<br> `insert into livros (codigo, nome, autor, paginas, preco, categoria, subcategoria)`
<br> `VALUES (105, "Harry Potter e Cálice de Fogo", "J. K. Rowlling", 584, 26, "Fantasia", "Magia")`
<br> `insert into livros (codigo, nome, autor, paginas, preco, categoria, subcategoria)`
<br> `VALUES (106, "Harry Potter e a Ordem da Fênix", "J. K. Rowlling", 704, 26, "Fantasia", "Magia")`
<br> `insert into livros (codigo, nome, autor, paginas, preco, categoria, subcategoria)`
<br> `VALUES (107, "Harry Potter e o Enigma do Principe", "J. K. Rowlling", 512, 26, "Fantasia", "Magia")`
<br> `insert into livros (codigo, nome, autor, paginas, preco, categoria, subcategoria)`
<br> `VALUES (108, "Harry Potter e as Relíquias da Morte", "J. K. Rowlling", 592, 26, "Fantasia", "Magia")`
<br> `insert into livros (codigo, nome, autor, paginas, preco, categoria, subcategoria)`
<br> `VALUES (109, "Shazam", "Eu mesmo", 666, 99, "Fantasia", "Caraí")`
<br> `insert into livros (codigo, nome, autor, paginas, preco, categoria, subcategoria)`
<br> `VALUES (110, "Oi cueio", "Primo Vaco", 592, 26, "Fantasia", "Magia")`
<br> `insert into livros (codigo, nome, autor, paginas, preco, categoria, subcategoria)`
<br> `VALUES (111, "Oi cueio 2", "Primo Vaco", 592, 26, "Fantasia", "Magia")`
27.	`delete from livros where codigo=45`
28.	`delete from livros where autor="Ferdinando Natale"`
29.	`delete from livros where nome="Eletrônica"`
30.	
31.	`delete from livros where codigo=26`



---

O códigos foram desenvolvidos no dia 17/03/2016 na cadeira de Banco de Dados, enquanto ministrada pelo Prof. Mauricio
Santos.