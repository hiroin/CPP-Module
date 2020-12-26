/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2020/12/24 15:11:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
private:
protected:
	virtual void outputMessage(ICharacter& target) const;
public:
	Ice(std::string const & type);
	Ice();
	virtual ~Ice();
	virtual AMateria* clone() const;
	//virtual void use(ICharacter& target);
	Ice(const Ice& Ice);
	Ice& 	operator = (const Ice& Ice);	
};

std::ostream&	operator<<(std::ostream& os, const Ice& Ice);

#endif
