/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:35:22 by atabarea          #+#    #+#             */
/*   Updated: 2026/05/07 12:05:12 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class A_Animal
{
	public:
		A_Animal(void);
		A_Animal(const A_Animal&);
		virtual ~A_Animal(void);
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
		A_Animal& operator=(const A_Animal&);

	protected:
		std::string type;
};
