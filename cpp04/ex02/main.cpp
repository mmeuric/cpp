/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:27:05 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:27:07 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	// UNCOMMENTING = ERROR BECAUSE ABSTRACT CLASS
	// std::cout << std::endl << "<<<ANIMAL TESTING>>>" << std::endl;
	// const Animal* anim = new Animal();
	// std::cout << "anim type is : " << anim->getType() << std::endl;
	// anim->makeSound();
	// delete(anim);

	std::cout << std::endl << "<<<DOG TESTING>>>" << std::endl;
	const Animal* doge = new Dog();
	std::cout << "doge type is : " << doge->getType() << std::endl;
	doge->makeSound();
	delete(doge);

	std::cout << std::endl << "<<<CAT TESTING>>>" << std::endl;
	const Animal* kitty = new Cat();
	std::cout << "kitty type is : " << kitty->getType() << std::endl;
	kitty->makeSound();
	delete(kitty);

	std::cout << std::endl << "<<<BRAIN CAT TESTING>>>" << std::endl;
	const Cat* smartCat = new Cat();
	smartCat->getBrain()->addIdea("Smart");
	smartCat->getBrain()->addIdea("Smarter");
	std::cout << smartCat->getBrain()->getIdea(0) << std::endl;
	std::cout << smartCat->getBrain()->getIdea(1) << std::endl;
	std::cout << smartCat->getBrain()->getIdea(2) << std::endl;
	const Cat* copyCat = new Cat(*smartCat);
	std::cout << copyCat->getBrain()->getIdea(0) << std::endl;
	std::cout << copyCat->getBrain()->getIdea(1) << std::endl;
	copyCat->getBrain()->addIdea("Bad idea");
	std::cout << copyCat->getBrain()->getIdea(2) << std::endl;
	std::cout << smartCat->getBrain()->getIdea(2) << std::endl;
	delete(smartCat);
	delete(copyCat);
	
}
