/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2021/01/27 13:59:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
public:
	Character(std::string const & name);
	virtual ~Character();
	Character(const Character& other);
	Character&	operator=(const Character& other);

public:
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
	virtual AMateria* getMateria(int idx) const;

private:
	Character();

private:
	const int	maxMaterias_;
	AMateria** 	materias_;
	std::string	name_;
};

std::ostream&	operator<<(std::ostream& os, const Character& Character);


#endif
