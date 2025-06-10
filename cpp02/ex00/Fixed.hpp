/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:08:59 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:09:01 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

#ifndef FIXED
# define FIXED

class Fixed
{
private:
	int	value;
	static int fract;
public:
	Fixed();
	Fixed(Fixed const &cpy);
	~Fixed();
	Fixed &operator=(const Fixed &other);
	int	getRawBits(void) const;
	void setRawBits (int const raw);
};


#endif