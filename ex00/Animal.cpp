/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:40:16 by atabarea          #+#    #+#             */
/*   Updated: 2026/05/07 11:23:50 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
	: type("")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal&other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Generic sound" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	this->type = other.getType();
	std::cout << "Copy assingment operator called" << std::endl;
	return (*this);
}
