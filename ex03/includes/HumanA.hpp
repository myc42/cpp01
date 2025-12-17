/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:49:26 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/17 19:45:10 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"



class HumanA
{
   
    private :
            std::string _name ;
            Weapon NewWeapon;
    public :
            HumanA::HumanA(std::string names , Weapon weapon2);
            void attack();
            
} ;

#endif
