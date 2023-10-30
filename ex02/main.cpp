/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 02:14:00 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/30 04:25:55 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap fragTrap("X");

	cout << endl;
	fragTrap.takeDamage(5);
	fragTrap.beRepaired(10);
	fragTrap.attack("Y");
	fragTrap.highFivesGuys();
	cout << endl;

	return 0;
}
