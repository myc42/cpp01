/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:44:25 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/17 17:30:09 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Zombie.hpp"

int main (void)
{
    Zombie *Zombfull ;
    Zombfull = zombieHorde(10, "akoua");
    for (int i = 0  ; i < 10 ; i ++)
    {
        Zombfull[i].announce();
    }
    delete [] Zombfull ;
    return (0);
}