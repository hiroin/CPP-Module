/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2021/01/27 13:52:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class ICharacter;
class Cure : public AMateria
{
public:
	Cure();
	virtual ~Cure();
	Cure(const Cure& other);
	Cure&	operator=(const Cure& other);	

public:
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

protected:
private:
};

std::ostream&	operator<<(std::ostream& os, const Cure& Cure);

#endif
