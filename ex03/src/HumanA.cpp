/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:49:24 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/17 19:44:50 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"



HumanA::HumanA(std::string names , Weapon weapon2)
{
    this->_name = names ;
    (void)weapon2;
}

HumanA::~HumanA()
{
    
}


 void attack(){
    
 }


