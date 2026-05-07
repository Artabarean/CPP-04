/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:40:16 by atabarea          #+#    #+#             */
/*   Updated: 2026/05/07 10:08:26 by atabarea         ###   ########.fr       */
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
	std::cout << "Generic sound" << std::endl;
}

A_Animal& A_Animal::operator=(const A_Animal& other)
{
	this->type = other.getType();
	std::cout << "Copy assingment operator called" << std::endl;
	return (*this);
}
