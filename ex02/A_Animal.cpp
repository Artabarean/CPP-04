/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:40:16 by atabarea          #+#    #+#             */
/*   Updated: 2026/04/30 12:51:05 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

A_Animal::A_Animal(void)
	: type("")
{
	std::cout << "A_Animal constructor called" << std::endl;
}

A_Animal::A_Animal(const A_Animal&other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

A_Animal::~A_Animal(void)
{
	std::cout << "A_Animal destructor called" << std::endl;
	
}

std::string A_Animal::getType(void) const
{
	return (this->type);
}

void	A_Animal::makeSound(void) const
{
	if (this->getType() == "Dog")
		std::cout << "Woof" << std::endl;
	if (this->getType() == "Cat")
		std::cout << "Miau" << std::endl;
	if (this->getType() == "")
		std::cout << "..." << std::endl;	
}

A_Animal& A_Animal::operator=(const A_Animal& other)
{
	this->type = other.getType();
	std::cout << "Copy assingment operator called" << std::endl;
	return (*this);
}
