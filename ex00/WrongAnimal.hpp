/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:29:18 by atabarea          #+#    #+#             */
/*   Updated: 2026/05/07 11:30:03 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal&);
		~WrongAnimal(void);
		virtual void makeSound(void) const;
		std::string getType(void) const;
		WrongAnimal& operator=(const WrongAnimal&);

	protected:
		std::string type;

};