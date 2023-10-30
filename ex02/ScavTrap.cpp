/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 06:14:38 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/30 02:57:31 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const string& name) : ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	cout << "Constructor for " << this->name << "(ScavTrap) is called." << endl;
}

ScavTrap::~ScavTrap(void) {
	cout << "Destructor for " << this->name << "(ScavTrap) is called." << endl;
}

void ScavTrap::attack(const string& target) {
	if (energyPoints > 0) {
		cout << "ScavTrap " << this->name << " attacks " << target << endl;
		this->energyPoints--;
	} else {
		cout << "ScavTrap " << this->name << " doesn't have energy points to attack :(" << endl;
	}
}

void ScavTrap::guardGate(void) {
	cout << "ScavTrap " << this->name << "is now in Gate keeper mode." << endl;
}
