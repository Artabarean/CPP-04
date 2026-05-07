/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:54:34 by atabarea          #+#    #+#             */
/*   Updated: 2026/05/07 10:09:50 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "A_Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal
{
	public:
		Dog(void);
		Dog(const Dog&);
		~Dog(void);
		void makeSound(void) const;
		Brain *get_brain(void);
		Dog& operator=(const Dog&);
	private:
		Brain *_brain;
	
};