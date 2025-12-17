/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:49:32 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/17 19:46:26 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANAB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"


class HumanB
{
    
   
    private :
            std::string _name ;
            Weapon NewWeapon;
    public :
            HumanB(std::string names);
            ~HumanB();
            void attack();
            void set_Weapon(Weapon wea) ;

} ;

#endif
