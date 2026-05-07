/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:35:22 by atabarea          #+#    #+#             */
/*   Updated: 2026/05/07 12:02:18 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(const Animal&);
		virtual ~Animal(void);
		virtual void makeSound(void) const;
		std::string getType(void) const;
		Animal& operator=(const Animal&);

	protected:
		std::string type;
};
