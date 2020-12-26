/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2020/12/26 10:20:35 by user42           ###   ########.fr       */
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
	Character();
	Character(std::string const & name);
	virtual ~Character();
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
	virtual AMateria* getMateria(int idx) const;
	Character(const Character& Character);
	Character& 	operator = (const Character& Character);
private:
	const int	maxMaterias_ = 4;		
	AMateria** 	materias_;
	std::string	name_;
};

std::ostream&	operator<<(std::ostream& os, const Character& Character);


#endif
