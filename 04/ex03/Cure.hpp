/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2020/12/24 15:19:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{
private:
protected:
	virtual void outputMessage(ICharacter& target) const;
public:
	Cure(std::string const & type);
	Cure();
	virtual ~Cure();
	virtual AMateria* clone() const;
	//virtual void use(ICharacter& target);
	Cure(const Cure& Cure);
	Cure& 	operator = (const Cure& Cure);	
};

std::ostream&	operator<<(std::ostream& os, const Cure& Cure);

#endif
