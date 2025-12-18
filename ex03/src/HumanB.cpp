/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:49:29 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/18 15:29:41 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"



HumanB::HumanB(std::string newName) : _name(newName) 
{ 
    
}
  

HumanB::HumanB(std::string newName , Weapon wea) : _name(newName) , NewWeapon (wea)
{
}

HumanB::~HumanB()
{
}

void HumanB::set_Weapon(Weapon wea) 
{
    
   NewWeapon  = wea  ;
    
}

void HumanB::attack()
{ 
    std::cout << _name << "  attacks with their" << NewWeapon.getType() << std::endl ;
 }


