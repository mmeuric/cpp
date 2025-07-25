/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:10:56 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:10:58 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->name = "default";
	this->attackDamage = 0;
	this->energyPoint = 10;
	this->hitPoint = 10;
}

ClapTrap::ClapTrap(std::string N)
{
	std::cout << "ClapTrap " << N << " has been created" << std::endl;
	this->name = N;
	this->attackDamage = 0;
	this->energyPoint = 10;
	this->hitPoint = 10;
}
ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called on " << other.getName() << std::endl;
	*this = other;
}
	
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " has been destroyed " << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->attackDamage = other.attackDamage;
		this->energyPoint = other.energyPoint;
		this->hitPoint = other.hitPoint;	
	}
	return (*this);
}

std::string ClapTrap::getName(void) const
{
	return this->name;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hitPoint > 0 && this->energyPoint > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage !" << std::endl;	
		this->energyPoint--;
	}
	else if (this->hitPoint == 0)
		std::cout << "ClapTrap " << this->name << " cannot attack because he's dead" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " cannot attack because he have no energy point" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint > amount)
		this->hitPoint -= amount;
	else if (this->hitPoint > 0)
		this->hitPoint = 0;
	else
	{
		std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage ! " << this->hitPoint << "HP left"<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoint > 0 && this->energyPoint > 0)
	{
		this->hitPoint += amount;
		this->energyPoint--;
		std::cout << "ClapTrap " << this->name << " has been repaired, he healed " << amount << " healh point ! He have "  << this->hitPoint << " HP now" << std::endl;
	}
	else if (this->hitPoint == 0)
		std::cout << "ClapTrap " << this->name << " is dead he can't be repaired" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " cannot repair because he have no energy point" << std::endl;
}