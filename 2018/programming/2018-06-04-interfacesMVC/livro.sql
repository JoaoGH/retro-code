-- phpMyAdmin SQL Dump
-- version 4.7.9
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1:3306
-- Generation Time: 29-Maio-2018 às 16:29
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
-- Database: `livro`
--

-- --------------------------------------------------------

--
-- Estrutura da tabela `info`
--

DROP TABLE IF EXISTS `info`;
CREATE TABLE IF NOT EXISTS `info` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `titulo` varchar(255) CHARACTER SET utf8 COLLATE utf8_bin NOT NULL,
  `ano` int(4) NOT NULL,
  `autor` varchar(255) CHARACTER SET utf8 COLLATE utf8_bin NOT NULL,
  `autor2` varchar(255) CHARACTER SET utf8 COLLATE utf8_bin NOT NULL,
  `autor3` varchar(255) CHARACTER SET utf8 COLLATE utf8_bin NOT NULL,
  `editora` varchar(255) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=11 DEFAULT CHARSET=utf8;

--
-- Extraindo dados da tabela `info`
--

INSERT INTO `info` (`id`, `titulo`, `ano`, `autor`, `autor2`, `autor3`, `editora`) VALUES
(2, 'titulo', 2018, 'eu', '', '', ''),
(3, 'titulo', 2018, 'eu', '', '', ''),
(4, 'titulo', 2018, 'eu', '', '', ''),
(5, 'titulo', 2018, 'eu', '', '', ''),
(6, 'titulo2', 2018, 'eu', '', '', ''),
(7, 'titulo2', 2018, 'eu', '', '', ''),
(8, 'titulo3', 2019, 'eu', 'tu', 'ele', 'fevereiro'),
(9, 'titulo3', 2019, 'eu', 'tu', '', 'fevereiro'),
(10, 'titulo4', 2019, 'aquela cara lÃ¡', '', '', 'marÃ§o');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
