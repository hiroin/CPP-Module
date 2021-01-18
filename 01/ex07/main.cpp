/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 06:55:03 by user42            #+#    #+#             */
/*   Updated: 2021/01/18 03:42:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "引数が3つありません。\n第一引数 : ファイル名\n第二引数 : 置換元の文字列\n第三引数 : 置換後の文字列" << std::endl;
		std::cerr << "There are three arguments missing. \n1st argument : filename \n2nd argument : string to replace from \n3rd argument : string to replace after" << std::endl;
		std::exit(1);
	}
	std::string search(argv[2]);
	if (search == "")
	{
		std::cerr << "置換元の文字列に空白は許容しません。" << std::endl;
		std::cerr << "No whitespace is allowed in the source string." << std::endl;
		std::exit(1);
	}
	std::string replace(argv[3]);
	if (replace == "")
	{
		std::cerr << "置換後の文字列に空白は許容しません。" << std::endl;
		std::cerr << "No whitespace is allowed in the replaced string." << std::endl;
		std::exit(1);
	}
	std::ifstream ifs(argv[1]);
	if (!ifs)
	{
		std::cerr << "読み込みファイルのオープンに失敗しました。" << std::endl;
		std::cerr << "Failed to open the read file." << std::endl;
		std::exit(1);
	}
	std::string output_filename(argv[1]);
	output_filename.append(".replace");
	const char* output_filename_char = output_filename.c_str();
	std::ofstream ofs(output_filename_char);
	if (!ofs)
	{
		std::cerr << "書き込みファイルのオープンに失敗しました。" << std::endl;
		std::cerr << "Failed to open the write file." << std::endl;
		std::exit(1);
	}
	// \x1A is End Of File
	std::string buf;
	if (std::getline(ifs, buf, '\x1A'))
	{
		std::string::size_type pos = 0;
		while ((pos = buf.find(search, pos)) != std::string::npos)
		{
			buf.replace(pos, search.length(), replace);
			pos += replace.length();
		}
		ofs << buf;
	}
	return (0);
}