/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:10:38 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:10:39 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>
#include <cmath>


#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

class ClapTrap
{
private:
	std::string	name;
	unsigned int	hitPoint;
	unsigned int	energyPoint;
	unsigned int	attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string N);
	ClapTrap(const ClapTrap &other);
	virtual ~ClapTrap();
	ClapTrap &operator=(const ClapTrap &other);
	std::string getName(void) const;
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif