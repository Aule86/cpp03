/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:32:45 by aszamora          #+#    #+#             */
/*   Updated: 2025/04/03 12:53:31 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name (" "), hp (10), ep(10), dp(0)
{
	
}

ClapTrap::ClapTrap(std::string name) : name (name), hp (10), ep(10), dp(0)
{
	std::cout << "ClapTrap " << this->name << " constructed" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " destructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout <<"ClapTrap copy " << this->name << " from ClapTrap " << src.name << std::endl;
	*this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) 
{
	std::cout << "Copy assignment called" << std::endl;
	if (this != &src)
	{
		this->name = src.name;
		this->hp = src.hp;
		this->ep = src.ep;
		this->dp = src.dp;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->hp == 0)
	{
		std::cout << "ClapTrap " << this->name << "is dead" << std::endl;
		return ;
	}
	if (this->ep < 1)
	{
		std::cout << "ClapTrap " << this->name << " has not energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->dp << " points of damage!" << std::endl;
	this->ep -= 1;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " took " << amount << " damage" << std::endl;
	this->hp -= amount;
	if (this->hp <= 0)
	{
		std::cout << "ClapTrap " << this->name << " dead" << std::endl;
		return ;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp <= 0)
	{
		std::cout << "ClapTrap " << this->name << " dead" << std::endl;
		return ;
	}
	if (this->ep > 0)
	{
		std::cout << "ClapTrap " << this->name << " restored " << amount << " health!" << std::endl;
		this->hp += amount;
	}
	else
		std::cout << "ClapTrap " << this->name << "cannot restore health; insufficient energy!" << std::endl;
}

void	ClapTrap::setDp(unsigned int amount)
{
	this->dp = amount;
}

int	ClapTrap::getDp()
{
	return (this->dp);
}
int	ClapTrap::getHp()
{
	return (this->hp);
}