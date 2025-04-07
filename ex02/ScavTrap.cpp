/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 11:10:00 by aszamora          #+#    #+#             */
/*   Updated: 2025/04/07 11:56:12 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " created" << std::endl;
}

ScavTrap::ScavTrap(std:: string name) : ClapTrap(name)
{
    this->hp = 100;
	this->ep = 50;
	this->dp = 20;
    std::cout << "ClapTrap " << this->name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "Scavtrap copy constructor called" << std::endl;
	*this = src;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << "ScavTrap copy assignment operator"<< std::endl;
    if (this == &src)
        return (*this);
    this->name = src.name;
    return (*this);
}

ScavTrap::~ScavTrap() 
{
	std::cout << "ScavTrap destructor for " << this->name << std::endl;
}

void	ScavTrap::attack (const std::string &target)
{
	if (this->hp <= 0)
    {
		std::cout << "ScavTrap " << this->name << " dead" << std::endl;
		return ;
	}
	if (this->ep < 1)
    {
		std::cout << "ScavTrap " << this->name << "cannot attack; insufficient energy!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->dp << " points of damage!" << std::endl;
	this->ep -= 1;
}

void ScavTrap::guardGate() 
{
	std::cout << "ScavTrap " <<  this->name << " is in Gate keeper mode!" << std::endl;
}
