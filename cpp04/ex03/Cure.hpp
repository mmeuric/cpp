/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:28:10 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:28:11 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: virtual public AMateria
{

	public:

		Cure();
		Cure( Cure const & src );
		virtual ~Cure();
		Cure &		operator=( Cure const & rhs );

		Cure *clone() const;
		void use(ICharacter &target);
	private:

};

#endif