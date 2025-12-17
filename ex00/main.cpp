/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:20:36 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/17 16:42:26 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Zombie.hpp"

int main (void)
{
    Zombie *NewZombies =  newZombie("foo") ;
    NewZombies ->announce();
    randomChump("me");
    delete(NewZombies);
    return (0);
}