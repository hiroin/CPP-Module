/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 06:55:03 by user42            #+#    #+#             */
/*   Updated: 2020/12/03 07:23:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <ios>
#include <regex>

int	main(int argc, char **argv)
{
	std::string				buf;
	std::string::size_type	pos;

	if (argc != 4)
	{
		std::cerr << "引数が3つありません。\n第一引数 : ファイル名\n第二引数 : 置換元の文字列\n第三引数 : 置換後の文字列" << std::endl;
		std::exit(1);
	}
	std::string search(argv[2]);
	if (search == "")
	{
		std::cerr << "置換元の文字列に空白は許容しません。" << std::endl;
		std::exit(1);
	}
	std::string replace(argv[3]);
	if (replace == "")
	{
		std::cerr << "置換後の文字列に空白は許容しません。" << std::endl;
		std::exit(1);
	}
	std::string input_filename(argv[1]);
	std::ifstream ifs(input_filename);
	if (!ifs)
	{
		std::cerr << "読み込みファイルのオープンに失敗しました。" << std::endl;
		std::exit(1);
	}
	std::string output_filename(argv[1]);
	output_filename.append(".replace");
	std::ofstream ofs(output_filename);
	if (!ofs)
	{
		std::cerr << "書き込みファイルのオープンに失敗しました。" << std::endl;
		std::exit(1);
	}
	if (std::getline(ifs, buf, '\x1A'))
	{
		//std::cout << buf;
		pos = 0;
		while ((pos = buf.find(search, pos)) != std::string::npos)
		{
			buf.replace(pos, search.length(), replace);
			pos += replace.length();
		}
		//std::cout << buf;
		ofs << buf;
	}
	return (0);
}