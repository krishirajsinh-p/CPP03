/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 02:14:02 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/30 01:30:18 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(string name) {
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	cout << "Constructor for " << this->name << " is called." << endl;
}

ClapTrap::~ClapTrap() {
	cout << "Destructor for " << this->name << " is called." << endl;
}

void ClapTrap::attack(const string& target) {
	if (energyPoints > 0) {
		cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << endl;
		this->energyPoints--;
	} else {
		cout << "ClapTrap " << this->name << " doesn't have energy points to attack :(" << endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (energyPoints > 0) {
		this->energyPoints--;
		this->hitPoints+=amount;
		cout << "ClapTrap " << this->name << " repairs itself, +" << amount << " hit points." << endl;
	} else {
		cout << "ClapTrap " << this->name << " doesn't have energy points to repaire itself :(" << endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoints >= amount) {
		cout << "ClapTrap " << this->name << " takes damage -" << amount << " hit points." << endl;
		this->hitPoints -= amount;
	} else {
		cout << "ClapTrap " << this->name << " doesn't have hits points to take damage :(" << endl;
	}
}
