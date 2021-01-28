/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2021/01/27 14:31:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const & type);
	AMateria* getMateria(int idx) const;
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource& other);
	MateriaSource& 	operator = (const MateriaSource& other);	

protected:

private:
	const int	maxMaterias_;		
	AMateria** 	materias_;	
};

std::ostream&	operator<<(std::ostream& os, const MateriaSource& MateriaSource);

#endif
