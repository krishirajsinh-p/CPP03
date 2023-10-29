/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 02:14:00 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/29 04:55:45 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Boeing");

	clapTrap.takeDamage(5);
	clapTrap.beRepaired(10);
	clapTrap.attack("Airbus");

	return 0;
}
