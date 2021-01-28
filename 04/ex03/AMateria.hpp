/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2021/01/27 13:44:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class ICharacter;

class AMateria
{
public:
	AMateria(std::string const & type);
	AMateria();
	virtual ~AMateria();
	AMateria(const AMateria& other);
	AMateria&	operator=(const AMateria& other);	

public:
	std::string const &	getType() const;
	unsigned int		getXP() const;
	virtual 			AMateria* clone() const = 0;
	virtual void		use(ICharacter& target);

protected:
	std::string		type_;
	unsigned int	xp_;
	// virtual void	outputMessage(ICharacter& target) const = 0;

private:
};

std::ostream&	operator<<(std::ostream& os, const AMateria& AMateria);

#endif
