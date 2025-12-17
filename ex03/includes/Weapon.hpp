/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:49:42 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/17 19:38:13 by macoulib         ###   ########.fr       */
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
            Weapon(std::string newType);
            void getType() const ;
            void setType(std::string newType) ;
} ;

#endif
