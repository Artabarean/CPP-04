/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:00:05 by atabarea          #+#    #+#             */
/*   Updated: 2026/05/08 10:32:29 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// const A_Animal* test = new A_Animal();
	// test->makeSound();
	// delete(test);
	
	Dog *first = new Dog();
	Dog *second = new Dog();

	first->get_brain()->change_idea(1, "hola");
	*second = *first;
	first->get_brain()->print_ideas();
	second->get_brain()->print_ideas();
	second->get_brain()->change_idea(2, "adios");
	second->get_brain()->print_ideas();
	first->get_brain()->print_ideas();
	delete second;
	delete first;
	
	// const A_Animal* j = new Dog();
	// const A_Animal* i = new Cat();
	
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// j->makeSound();
	// i->makeSound();
	// delete(j);
	// delete(i);
	return (0);
}
