/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:25:06 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:25:08 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:
public:
	WrongCat();
	WrongCat(const WrongCat &cpy);
	virtual ~WrongCat();
	WrongCat &operator=(const WrongCat &cpy);
};

