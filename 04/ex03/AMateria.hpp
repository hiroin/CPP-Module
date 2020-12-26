/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2020/12/24 15:07:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class ICharacter;

class AMateria
{
private:
protected:
	std::string		type_;
	unsigned int	xp_;
	//virtual void outputMessage(ICharacter& target) const; //あとで抽象関数にする
	virtual void outputMessage(ICharacter& target) const = 0;
public:
	AMateria(std::string const & type);
	AMateria();
	virtual ~AMateria();
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	AMateria(const AMateria& AMateria);
	AMateria& 	operator = (const AMateria& AMateria);	
};

std::ostream&	operator<<(std::ostream& os, const AMateria& AMateria);

#endif
