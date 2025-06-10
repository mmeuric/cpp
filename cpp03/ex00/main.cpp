/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:10:45 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:10:47 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << " - ClapTrap Test - " << std::endl;
	ClapTrap one("One");
	one.takeDamage(10);
	one.takeDamage(10);
	ClapTrap two("Two");
	two.takeDamage(5);
	two.beRepaired(5);
	two.beRepaired(5);
	two.attack("something");

	return (0);
}