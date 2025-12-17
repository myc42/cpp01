/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:33:07 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/17 17:48:25 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main (void)
{
    std::string testVar =  "HI THIS IS BRAIN";
    std::string *stringPTR = &testVar ;
    std::string& stringREF = testVar ;
    
    std::cout << "                   ----    ADRESS  -----    "  << std::endl;

    std::cout << "The memory address of the string variable.:"<<&testVar << std::endl;
    std::cout << "The memory address held by stringPTR.     :"<< &stringPTR << std::endl;
    std::cout << "The memory address held by stringREF.     :" <<&stringREF << std::endl;

     std::cout << "                   ----    VALUE  -----    "  << std::endl;

    std::cout << "The value of the string variable.         :"<<testVar << std::endl;
    std::cout << "The value pointed to by stringPTR         :"<<stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF.        :"<<stringREF << std::endl;

    
    return (0); 
}