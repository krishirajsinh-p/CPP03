/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 02:14:00 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/30 04:27:17 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Boeing");

	cout << endl;
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(10);
	clapTrap.attack("Airbus");
	cout << endl;

	return 0;
}
