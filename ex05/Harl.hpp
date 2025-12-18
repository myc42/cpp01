/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 18:37:40 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/18 19:08:07 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <fstream>
#include <string>

class Harl 
{
    private :
            void debug( void );
            void info( void );
            void warning( void );
            void error( void );
    public :
            void complain( std::string level );
    
} ;


#endif