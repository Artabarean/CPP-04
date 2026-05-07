/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:00:06 by atabarea          #+#    #+#             */
/*   Updated: 2026/05/07 11:27:52 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
	: Animal()
{
	this->_brain = new Brain;
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
	: Animal()
{
	this->_brain = other._brain->clone();
	this->type = other.getType();
	std::cout << "Copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Brain *Cat::get_brain(void)
{
	return (this->_brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	*this->_brain = *other._brain;
	this->type = other.getType();
	return (*this);
}
