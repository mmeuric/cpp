/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:28:24 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:28:25 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: virtual public AMateria
{

	public:
		Ice();
		Ice( Ice const & src );
		virtual ~Ice();
		Ice &		operator=( Ice const & rhs );

		Ice *clone() const;
		void use(ICharacter &target);

	private:

};

#endif 