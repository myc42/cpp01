/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 18:37:43 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/18 19:49:33 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ()
{
    Harl Harl ;
    
    Harl.complain("DEBUG");
    Harl.complain("INFO");
    Harl.complain("WARNING");
    Harl.complain("ERROR");
    
    return (0);
  
}