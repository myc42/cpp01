/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:44:48 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/17 17:28:21 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
    private :
           std::string _name ;
    public :
           
            Zombie(){};
            Zombie(std::string _name);
           ~Zombie();
           void  setName(std::string name);
           void announce( void );
} ;

Zombie* zombieHorde( int N, std::string name );

#endif