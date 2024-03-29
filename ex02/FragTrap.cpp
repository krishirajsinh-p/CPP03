/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 03:02:09 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/30 04:29:27 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const string& name) : ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	cout << "Constructor for " << this->name << "(FragTrap) is called." << endl;
}

FragTrap::~FragTrap(void) {
	cout << "Destructor for " << this->name << "(FragTrap) is called." << endl;
}

void FragTrap::highFivesGuys(void) {
	cout << "FragTrap " << this->name << "is asking for high fives. \\!!!!" << endl;
}
