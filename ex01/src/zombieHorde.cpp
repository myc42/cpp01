/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:44:51 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/17 17:28:51 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void Zombie::setName(std::string name)
{
    this->_name = name;
}


Zombie* zombieHorde( int N, std::string name )
{
   
    Zombie *FullZombies = new Zombie[N] ;
   
    for (int i = 0 ; i < N ; i++)
    {
       FullZombies[i].setName(name)  ;
    }
    return (FullZombies);
}