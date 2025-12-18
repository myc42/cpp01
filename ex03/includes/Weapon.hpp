/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:49:42 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/18 15:26:59 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>


class Weapon
{
    private :
           std::string _type;
    public :
            Weapon( std::string newType);
             Weapon() {};
            ~Weapon(){};
            const std::string& getType() const ;
            void setType(const std::string& newType) ;
} ;

#endif
