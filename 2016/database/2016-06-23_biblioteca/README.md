# Lista de exercícios de Banco de Dados

Lista de exercícios desenvolvida no dia 23/06/2016 na cadeira de Banco de Dados.

## Enunciados

Os enunciados foram projetados em no quadro, não tenho os mesmos somente as respostas.

O cenário era criar uma banco de dados para uma biblioteca de uma escola.

### Respostas

1.	select titulo from livros
2.	select cod_livro,titulo,autor,preco from livros where cod_livro=46
3.	select titulo,autor from livros where titulo like 'A%'
4.	select titulo,autor,preco from livros where autor like 'E%'
5.	select titulo,preco,categoria,subcategoria from livros where categoria='Informática'
6.	select titulo,autor,preco,paginas,categoria from livros where subcategoria in("Eletrônica","Matemática")
7.	select titulo,autor,preco,categoria,subcategoria from livros where preco=59
8.	select titulo,preco from livros where preco>=60
9.	select titulo,preco from livros where preco>=30 and preco<=40
10.	select titulo,autor,preco,subcategoria from livros where titulo like "%Circuito%"
11.	select autor from livros order by autor desc
12.	select titulo from livros where titulo like "% Prático"
13.	select * from livros where titulo like "__S%"
14.	select count(titulo) from livros where subcategoria="Computação Gráfica"
15.	select sum(preco) from livros where subcategoria="Geral"
16.	select titulo,autor,preco from livros where titulo like ("%Dirigido%")
17.	select titulo,preco from livros where cod_livro=12
18.	select * livros where preco>60
19.	select cod_livro,titulo,autor,preco,categoria from livros order by titulo asc
20.	select titulo,autor,min(preco) from livros group by preco limit 1
21.	select titulo,autor,preco from livros where cod_livro<=10 order by titulo desc
22.	select avg(preco) from livros
23.	select titulo,autor,preco+20 from livros
24.	select titulo,autor,preco,categoria from livros where cod_livro>=40 and cod_livro<=50 order by cod_livro asc
25.	
26.	insert into livros(titulo,autor,paginas,preco,categoria,subcategoria) values ("Banco de Dados I","João Gabriel Hartmann", "666", "33", "Informática", "Banco de Dados");
insert into livros(titulo,autor,paginas,preco,categoria,subcategoria) values ("Banco de Dados II","João Gabriel Hartmann", "666", "33", "Informática", "Banco de Dados");
insert into livros(titulo,autor,paginas,preco,categoria,subcategoria) values ("Banco de Dados III","João Gabriel Hartmann", "666", "33", "Informática", "Banco de Dados");
insert into livros(titulo,autor,paginas,preco,categoria,subcategoria) values ("Banco de Dados IV","João Gabriel Hartmann", "666", "33", "Informática", "Banco de Dados");
insert into livros(titulo,autor,paginas,preco,categoria,subcategoria) values ("Banco de Dados V","João Gabriel Hartmann", "666", "33", "Informática", "Banco de Dados");
insert into livros(titulo,autor,paginas,preco,categoria,subcategoria) values ("Banco de Dados VI","João Gabriel Hartmann", "666", "33", "Informática", "Banco de Dados");
insert into livros(titulo,autor,paginas,preco,categoria,subcategoria) values ("Banco de Dados VII","João Gabriel Hartmann", "666", "33", "Informática", "Banco de Dados");
insert into livros(titulo,autor,paginas,preco,categoria,subcategoria) values ("Banco de Dados VIII","João Gabriel Hartmann", "666", "33", "Informática", "Banco de Dados");
insert into livros(titulo,autor,paginas,preco,categoria,subcategoria) values ("Banco de Dados IX","João Gabriel Hartmann", "666", "33", "Informática", "Banco de Dados");
insert into livros(titulo,autor,paginas,preco,categoria,subcategoria) values ("Banco de Dados X","João Gabriel Hartmann", "666", "33", "Informática", "Banco de Dados");
insert into livros(titulo,autor,paginas,preco,categoria,subcategoria) values ("Banco de Dados XI","João Gabriel Hartmann", "666", "33", "Informática", "Banco de Dados");
insert into livros(titulo,autor,paginas,preco,categoria,subcategoria) values ("Banco de Dados XII","João Gabriel Hartmann", "666", "33", "Informática", "Banco de Dados");
insert into livros(titulo,autor,paginas,preco,categoria,subcategoria) values ("Banco de Dados XIII","João Gabriel Hartmann", "666", "33", "Informática", "Banco de Dados");
insert into livros(titulo,autor,paginas,preco,categoria,subcategoria) values ("Banco de Dados XIV","João Gabriel Hartmann", "666", "33", "Informática", "Banco de Dados");
insert into livros(titulo,autor,paginas,preco,categoria,subcategoria) values ("Banco de Dados XV","João Gabriel Hartmann", "666", "33", "Informática", "Banco de Dados");
27.	select * from alunos
28.	select nome,email,celular from alunos order by nome asc
29.	select * from alunos where email=vicente@gmail.com
30.	select nome,celular from alunos where email=tati@live.com
31.	select * from alunos where celular="8584888"
32.	select nome,email,celular from alunos where nome like"V%"
33.	select nome,email,celular from alunos where nome like"%Cruz"
34.	select count(*) from livros
35.	select count(*) from alunos
36.	select *  from alunos where email like("%hotmail%")
37.	select *  from alunos where celular like("8%")
38.	select *  from alunos order by cod_aluno asc limit 5
39.	select nome,celular from alunos where nome like"%Rômulo%"
40.	select * from alunos where email like"%@gmail%"
41.	select * from emprestimos where data_dev="nd"
42.	select nome,email,titulo from alunos, livros, emprestimos where alunos.cod_aluno = emprestimos.cod_aluno and livros.cod_livro = emprestimos.cod_livro and alunos.cod_aluno = 1;
43.	select nome,titulo from alunos,livros,emprestimos where alunos.cod_aluno = emprestimos.cod_aluno and livros.cod_livro = emprestimos.cod_livro and alunos.nome="Vicente Soares Neto" and data_emp ="01/03/2016";
44.	select titulo,data_emp,data_dev from alunos,livros,emprestimos where alunos.cod_aluno = emprestimos.cod_aluno and livros.cod_livro = emprestimos.cod_livro and emprestimos.data_dev="11/03/2016"
45.	select nome,titulo,preco from alunos,livros,emprestimos where alunos.cod_aluno = emprestimos.cod_aluno and livros.cod_livro = emprestimos.cod_livro and alunos.cod_aluno = 15
46.	select nome,titulo,categoria,subcategoria,data_emp,data_dev from alunos,livros,emprestimos where alunos.cod_aluno = emprestimos.cod_aluno and livros.cod_livro = emprestimos.cod_livro and alunos.nome = "Pedro Luiz Côrtes" and livros.categoria="Informática"
47.	select nome,titulo,categoria,subcategoria,data_emp,data_dev from alunos a,livros l,emprestimos e where a.cod_aluno = e.cod_aluno and l.cod_livro = e.cod_livro and a.nome = "Pedro Luiz Côrtes" and l.categoria="Informática"
48.	select count(cod_emp) from alunos a,livros l,emprestimos e where a.cod_aluno = e.cod_aluno and l.cod_livro = e.cod_livro and a.cod_aluno = 32
49.	select nome,email,titulo,autor,data_emp,data_dev from alunos a,livros l,emprestimos e where a.cod_aluno = e.cod_aluno and l.cod_livro = e.cod_livro and l.cod_livro = 80
50.	.
51.	delete from livros where cod_livro = 90
52.	delete from livros where autor="Fernanda Caetano de Gois"
53.	delete from livros where titulo="Eletrônica"
54.	update livros set preco=100 where titulo="Curso Prático de Word 97" or autor="Mário Gomes da Silva"
55.	delete from livros where cod_livro=36
56.	update livros set autor="João Gabriel Hartmann" where cod_livro=7
57.	update livros set categoria="Eletrônica" where cod_livro=43
58.	delete from livros where autor="Délio Pereira Grande"
59.	update livros set preco=preco*1.2 where categoria="Técnicos"
60.	delete from alunos where nome="João Mão Grande"
61.	update alunos a,livros l,emprestimos e set data_dev="23/06/2016" where a.cod_aluno = e.cod_aluno and l.cod_livro = e.cod_livro and a.nome = "Marcelo Chaves Ladeira"
62.	select autor, titulo,categoria,subcategoria from livros where cod_livro=65
63.	select a.nome,a.email from alunos a,livros l,emprestimos e where a.cod_aluno = e.cod_aluno and l.cod_livro = e.cod_livro and l.cod_livro =1
64.	delete from emprestimos where cod_livro=1
65.	delete from emprestimos where cod_aluno=61


---

O códigos foram desenvolvidos no dia 23/06/2016 na cadeira de Banco de Dados, enquanto ministrada pelo Prof. Mauricio dos Santos.