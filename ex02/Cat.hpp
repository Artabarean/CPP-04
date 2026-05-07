/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:59:01 by atabarea          #+#    #+#             */
/*   Updated: 2026/05/07 10:09:31 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "A_Animal.hpp"
#include "Brain.hpp"

class Cat : public A_Animal
{
	public:
		Cat(void);
		Cat(const Cat&);
		~Cat(void);
		void makeSound(void) const;
		Brain *get_brain(void);
		Cat& operator=(const Cat&);
	private:
		Brain *_brain;

};
