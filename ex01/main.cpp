/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 11:47:42 by aszamora          #+#    #+#             */
/*   Updated: 2025/04/03 11:29:43 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap	c1("pablito");
	ScavTrap	c2("julio");
	ScavTrap	c3 = c1;

	c1.attack("julio");
	c2.attack("pablito");
	c3.attack("julio");
	c1.guardGate();
	c2.guardGate();
	c3.guardGate();
}