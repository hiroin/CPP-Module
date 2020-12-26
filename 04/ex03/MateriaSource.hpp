/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2020/12/26 14:25:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	const int	maxMaterias_ = 4;		
	AMateria** 	materias_;	
protected:
public:
	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const & type);
	AMateria* getMateria(int idx) const;
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource& MateriaSource);
	MateriaSource& 	operator = (const MateriaSource& MateriaSource);	
};

std::ostream&	operator<<(std::ostream& os, const MateriaSource& MateriaSource);

#endif
