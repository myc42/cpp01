/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:49:24 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/18 15:29:25 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"



HumanA::HumanA(std::string names , Weapon weapon2) : _name(names) , NewWeapon(weapon2)
{
    
}

void HumanA::attack(){ 
    std::cout << _name <<  "  attacks with their" << NewWeapon.getType() << std::endl ;
 }



