/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:26:25 by aszamora          #+#    #+#             */
/*   Updated: 2025/03/31 12:20:04 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	Paco("Paco");
	ClapTrap	Manuel("Manuel");

	Paco.attack("Manuel");
	Manuel.takeDamage(Paco.getDp());
	Manuel.beRepaired(Paco.getDp());

	Manuel.setDp(3);
	Manuel.attack("Paco");
	Paco.takeDamage(Manuel.getDp());
	Manuel.setDp(8);
	Manuel.attack("Paco");
	Paco.takeDamage(Manuel.getDp());
}
