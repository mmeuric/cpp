/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:25:41 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:25:42 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Brain
{
private:
	std::string ideas[100];
	unsigned int nbIdea;
public:
	Brain();
	Brain(const Brain &cpy);
	virtual ~Brain();
	std::string getIdea(unsigned int i) const;
	void addIdea(std::string idea);
	Brain &operator=(const Brain &cpy);
};

