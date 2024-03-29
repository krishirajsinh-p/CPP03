/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 02:14:00 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/30 04:26:06 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scavTrap("X");

	cout << endl;
	scavTrap.takeDamage(5);
	scavTrap.beRepaired(10);
	scavTrap.attack("Y");
	scavTrap.guardGate();
	cout << endl;

	return 0;
}
