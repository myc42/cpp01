/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:49:40 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/17 19:34:28 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"


Weapon::Weapon(std::string newType)
{
    
    this->_type = newType ;
}

void Weapon::getType(void) const 
{
    std::cout << this->_type;
}


void Weapon::setType(std::string newType)  
{
    this->_type = newType ;
}


