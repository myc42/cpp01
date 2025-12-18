/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:49:40 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/18 14:35:57 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"


Weapon::Weapon(std::string newType) : _type(newType)
{

}

const std::string& Weapon::getType() const
{
    return _type;
}


void Weapon::setType(const std::string& type) {
    _type = type;
}

