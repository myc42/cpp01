/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:20:46 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/17 16:37:00 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Zombie.hpp"

void randomChump( std::string name )
{
  Zombie random(name);
  random.announce();
}