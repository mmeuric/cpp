/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:28:53 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:28:54 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Character.hpp"
class MateriaSource: virtual public IMateriaSource
{

	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		virtual ~MateriaSource();
		MateriaSource &operator=( MateriaSource const & rhs );
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
	private:
		AMateria *_source[INVENTORY_SLOT];
};
#endif