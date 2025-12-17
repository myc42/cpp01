/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:20:49 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/17 16:28:24 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"


Zombie::Zombie (std::string name)
{
  this->_name = name; 
  std::cout <<_name << " is created" << std::endl; 
}

Zombie::~Zombie ()
{
   std::cout <<_name << " is destroy" << std::endl;
}
   
void Zombie::announce( void )
{   
      std::cout <<_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

