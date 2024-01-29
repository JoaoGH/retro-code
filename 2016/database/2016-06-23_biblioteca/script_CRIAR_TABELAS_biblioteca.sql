CREATE TABLE IF NOT EXISTS alunos (
  cod_aluno int(10) unsigned NOT NULL auto_increment,
  nome varchar(200) ,
  email varchar(100) ,
  celular varchar(20) ,
  PRIMARY KEY (cod_aluno)
);



CREATE TABLE IF NOT EXISTS emprestimos (
  cod_emp int(10) unsigned NOT NULL auto_increment,
  cod_aluno int(10) unsigned NOT NULL,
  cod_livro int(11) NOT NULL,
  data_emp varchar(10) ,
  data_dev varchar(10) ,
  PRIMARY KEY (cod_emp),
   KEY cod_livro (cod_livro),
   KEY cod_aluno (cod_aluno)
);



CREATE TABLE IF NOT EXISTS livros (
  cod_livro int(11) NOT NULL,
  titulo varchar(255) NOT NULL,
  autor varchar(200) NOT NULL,
  paginas int(11) NOT NULL,
  preco float NOT NULL,
  categoria varchar(100) NOT NULL,
  subcategoria varchar(100) NOT NULL,
  PRIMARY KEY (cod_livro)
);

