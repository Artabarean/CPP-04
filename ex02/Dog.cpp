/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:54:11 by atabarea          #+#    #+#             */
/*   Updated: 2026/05/07 10:10:21 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
	: A_Animal()
{
	this->_brain = new Brain;
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
	: A_Animal()
{
	this->_brain = other._brain->clone();
	this->type = other.getType();
	std::cout << "Copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Brain *Dog::get_brain(void)
{
	return (this->_brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	this->type = other.getType();
	return (*this);
}
