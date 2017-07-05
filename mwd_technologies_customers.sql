-- phpMyAdmin SQL Dump
-- version 4.6.5.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jun 23, 2017 at 05:22 PM
-- Server version: 10.1.21-MariaDB
-- PHP Version: 5.6.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `mwd_technologies_customers`
--
CREATE DATABASE IF NOT EXISTS `mwd_technologies_customers` DEFAULT CHARACTER SET utf8 COLLATE utf8_general_ci;
USE `mwd_technologies_customers`;

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE `users` (
  `name` varchar(255) NOT NULL,
  `lastname` varchar(255) NOT NULL,
  `email` varchar(255) NOT NULL,
  `phone` varchar(20) DEFAULT NULL,
  `age` int(11) DEFAULT NULL,
  `country` char(2) DEFAULT NULL,
  `gender` char(1) DEFAULT NULL,
  `subscribed` tinyint(1) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`name`, `lastname`, `email`, `phone`, `age`, `country`, `gender`, `subscribed`) VALUES
('Dragan', 'Draganov', 'dragandraganov@email.com', '+12-34-7890', 25, 'IT', 'M', 1),
('Ivan', 'Ivanov', 'ivanivanov@domain.com', '+1234567', 32, 'ES', 'M', 1),
('John', 'Smith', 'john.smith@mwd-systems.com', '+49 123 1233', 32, 'DE', 'M', 1),
('Milena', 'Raskova', 'milenaraskova@email.com', '+123-456-109', 32, 'IT', 'F', 1),
('Pesho', 'Peshev', 'peshopeshev@domain.com', '+12-34-56-789', 40, 'BG', 'M', 1),
('Tim', 'O\\\'Reilly', 'reillly@domain.com', '+1234567', 45, 'UK', 'M', 1);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`name`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
