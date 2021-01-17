/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 07:18:58 by user42            #+#    #+#             */
/*   Updated: 2021/01/17 07:09:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
clang++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address *.cpp
clang++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address,leak *.cpp
*/
#include <string>
#include <iostream>

void memoryLeak()
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

int	main(void)
{
	memoryLeak();
	return (0);
}