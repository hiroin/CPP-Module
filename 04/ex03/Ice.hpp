/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2021/01/27 13:44:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"

class ICharacter;
class Ice : public AMateria
{
public:
	Ice();
	virtual ~Ice();
	Ice(const Ice& other);
	Ice&	operator=(const Ice& other);

public:
	virtual AMateria*	clone() const;
	virtual void		use(ICharacter& target);

protected:
	// virtual void outputMessage(ICharacter& target) const;

private:
};

std::ostream&	operator<<(std::ostream& os, const Ice& Ice);

#endif
