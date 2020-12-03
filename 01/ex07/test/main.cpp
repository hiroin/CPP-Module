/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 06:55:03 by user42            #+#    #+#             */
/*   Updated: 2020/12/03 02:48:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <ios>

int	main(int argc, char **argv)
{
	std::ifstream ifs("hello.txt");
	if (!ifs)
	{
		std::cerr << "ファイルのオープンに失敗" << std::endl;
		std::exit(1);
	}
	while (!ifs.eof())
	{
		char	c;
		ifs.get(c);
		std::cout << c;
	}
    // while (1) {
    //     char c;
    //     ifs.get(c);
    //     if (ifs.eof()) {
    //         break;
    //     }
    //     std::cout << c;
    // }	
	std::cout << std::flush;
	// std::ifstream ifs("hello.txt");
	// if (!ifs)
	// {
	// 	std::cerr << "ファイルのオープンに失敗" << std::endl;
	// 	std::exit(1);
	// }
	// std::string buf;
	// std::getline(ifs, buf);
	// if (!ifs)
	// {
	// 	std::cerr << "読み込みに失敗" << std::endl;
	// 	std::exit(1);
	// }
	// std::cout << buf << std::endl;
	// std::getline(ifs, buf);
	// if (!ifs)
	// {
	// 	std::cerr << "読み込みに失敗" << std::endl;
	// 	std::exit(1);
	// }
	// std::cout << buf << std::endl;
	// std::getline(ifs, buf);
	// if (!ifs)
	// {
	// 	std::cerr << "読み込みに失敗" << std::endl;
	// 	std::exit(1);
	// }
	// std::cout << buf << std::endl;
	// std::ifstream ifs("hello.txt");
	// if (!ifs)
	// {
	// 	std::cerr << "ファイルのオープンに失敗" << std::endl;
	// 	std::exit(1);
	// }
	// ifs.unsetf(std::ios::skipws);
	// std::string buf;
	// //ifs >> std::noskipws >> buf;
	// ifs >> buf;
	// if (!ifs)
	// {
	// 	std::cerr << "読み込みに失敗" << std::endl;
	// 	std::exit(1);
	// }
	// std::cout << buf << std::endl;
	// std::ofstream ofs("hello.txt");
	// if (!ofs)
	// {
	// 	std::cerr << "ファイルのオープンに失敗" << std::endl;
	// 	std::exit(1);
	// }
	// ofs << "Hello, World" << std::endl;
	return (0);
}