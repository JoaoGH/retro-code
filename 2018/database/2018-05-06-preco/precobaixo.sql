-- phpMyAdmin SQL Dump
-- version 4.7.9
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1:3306
-- Generation Time: 07-Maio-2018 às 02:00
-- Versão do servidor: 5.7.21
-- PHP Version: 5.6.35

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `precobaixo`
--

-- --------------------------------------------------------

--
-- Estrutura da tabela `produtos`
--

DROP TABLE IF EXISTS `produtos`;
CREATE TABLE IF NOT EXISTS `produtos` (
  `idProduto` int(11) NOT NULL AUTO_INCREMENT,
  `nomeProduto` varchar(255) CHARACTER SET utf8 COLLATE utf8_bin NOT NULL,
  `precoProduto` varchar(255) CHARACTER SET utf8 COLLATE utf8_bin NOT NULL,
  `vendedorProduto` varchar(255) CHARACTER SET utf8 COLLATE utf8_bin NOT NULL,
  PRIMARY KEY (`idProduto`)
) ENGINE=MyISAM AUTO_INCREMENT=20 DEFAULT CHARSET=latin1;

--
-- Extraindo dados da tabela `produtos`
--

INSERT INTO `produtos` (`idProduto`, `nomeProduto`, `precoProduto`, `vendedorProduto`) VALUES
(1, 'geladeira', '', 'nao sei'),
(2, 'ropeiro', '', 'aqui'),
(3, 'ropeiro', '', 'aqui'),
(4, 'ropeiro', '', 'aqui'),
(5, 'ropeiro', '', 'aqui'),
(6, 'ropeiro', '', 'aqui'),
(7, 'ropeiro', '', 'aqui'),
(8, 'ropeiro', '', 'aqui'),
(9, 'mesa', '', '111'),
(10, 'mesa', '', '111'),
(11, 'geladeira', '', '123'),
(12, 'geladeira', '', '123'),
(13, 'geladeira', '', '123'),
(14, 'geladeira', '', '123'),
(15, 'geladeira', '', '123'),
(16, 'geladeira', '', '123'),
(17, 'geladeira', '', '123'),
(18, 'geladeira', '', '123'),
(19, 'mesa', '', 'casa');

-- --------------------------------------------------------

--
-- Estrutura da tabela `usuarios`
--

DROP TABLE IF EXISTS `usuarios`;
CREATE TABLE IF NOT EXISTS `usuarios` (
  `idUser` int(11) NOT NULL AUTO_INCREMENT,
  `nome` varchar(255) CHARACTER SET utf8 COLLATE utf8_bin NOT NULL,
  `senha` varchar(255) CHARACTER SET utf8 COLLATE utf8_bin NOT NULL,
  `cadastrado` int(11) NOT NULL,
  PRIMARY KEY (`idUser`)
) ENGINE=MyISAM AUTO_INCREMENT=7 DEFAULT CHARSET=latin1;

--
-- Extraindo dados da tabela `usuarios`
--

INSERT INTO `usuarios` (`idUser`, `nome`, `senha`, `cadastrado`) VALUES
(1, 'adm', '123456', 0),
(2, 'ab', 'cd', 0),
(3, 'joao', '123', 0),
(4, 'user', '123', 0),
(5, 'usur', '123', 0),
(6, 'a', '1', 0);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
