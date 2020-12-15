/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/15 06:55:56 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <string>
# include "ISquad.hpp"

class Squad : public ISquad
{
public:
	Squad();
	virtual ~Squad();
	Squad(const Squad& Squad);
	Squad& 	operator = (const Squad& Squad);
protected:
private:
	int				count_;
	ISpaceMarine*	marines;	
};

std::ostream&	operator<<(std::ostream& os, const Squad& Squad);

#endif