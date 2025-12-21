/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:20:52 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/21 17:28:13 by macoulib         ###   ########.fr       */
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
           void announce(void);
} ;

Zombie* newZombie( std::string name );
void randomChump( std::string name ) ;


#endif