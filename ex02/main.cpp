/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:50:30 by aszamora          #+#    #+#             */
/*   Updated: 2025/04/07 12:29:50 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() 
{
	FragTrap	Rosa("Rosa");
	FragTrap	Julia("Julia");
	FragTrap	copia = Rosa;

	Rosa.attack("Julia");
	Julia.attack("Rosa");
	copia.attack("Julia");
	Rosa.highFivesGuys();
	Julia.highFivesGuys();
	copia.highFivesGuys();
}
