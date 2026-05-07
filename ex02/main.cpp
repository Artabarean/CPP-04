/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:00:05 by atabarea          #+#    #+#             */
/*   Updated: 2026/05/07 12:12:46 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	//const A_Animal* meta = new A_Animal();

	A_Animal* test = new Cat();
	test->makeSound();
	delete(test);
	
	const A_Animal* j = new Dog();
	const A_Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	delete(j);
	delete(i);
	return (0);
}