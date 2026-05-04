/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:00:05 by atabarea          #+#    #+#             */
/*   Updated: 2026/04/30 13:06:27 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const A_Animal* Anarray[10];
	int i = 0;
	while(i < 5)
	{
		std::cout << "A_Animal:" << i << std::endl;
		Anarray[i] = new Cat();
		i++;
	}
	while(i < 10)
	{
		std::cout << "A_Animal:" << i << std::endl;
		Anarray[i] = new Dog();
		i++;
	}
	for(int j = 0; j < 10; j++)
	{
		delete Anarray[j];
	}
	// Dog *i = new Dog();
	// Dog *j = new Dog(*i);
	// i->get_brain()->change_idea(1, "hola");
	// i->get_brain()->print_ideas();
	// j->get_brain()->print_ideas();
	// j->get_brain()->change_idea(2, "adios");
	// j->get_brain()->print_ideas();
	// i->get_brain()->print_ideas();
	// delete i;
	// delete j;
	return (0);
}