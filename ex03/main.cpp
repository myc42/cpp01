/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:49:35 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/18 15:29:07 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./includes/Weapon.hpp"
#include "./includes/HumanA.hpp"
#include "./includes/HumanB.hpp"

int main(void )
{
  {
      Weapon club =  Weapon("crude spiked club");
      HumanB Jim(std::string("Jim"));
      Jim.set_Weapon(club);
      Jim.attack();
      club.setType("some other type of club");
      Jim.attack();
  }
  {
      Weapon club = Weapon("crude spiked club");
      HumanA bob((std::string("Bob")), club);
      bob.attack();
      club.setType("some other type of club");
      bob.attack();
  }
  return(0);
}   