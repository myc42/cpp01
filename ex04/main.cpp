/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:49:45 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/18 18:36:11 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "main.hpp"
#include <fstream>




int main (int ac, char **av)
{
    char c;
    size_t i ;
    std::string filename;
    std::string buffer = "";
    std::ifstream fd;     
    std::ofstream outfd;   
    
   
    if (ac != 4)
    {
        std::cerr << "Usage: filename strFind strReplace\n";
        return 1;
    }
    i = 0 ;

    fd.open(av[1]);
    if (!fd.is_open())
    {
        std::cerr << "Error: fd not open!\n";
        return 1;
    }

    /* open output file ONLY if input is open */
    filename = std::string(av[1]) + ".replace";
    outfd.open(filename.c_str());
    if (!outfd.is_open())
    {
        std::cerr << "Error: outfd not open!\n";
        return 1;
    }
   

   while (fd.get(c))
{
    if (c == av[2][i]) 
    {
        buffer += c;
        i++;
        if (i == std::string(av[2]).length())
        {
            outfd << av[3]; 
            buffer = "";
            i = 0;
        }
    }
    else
    {
        outfd << buffer;
        buffer = "";
        i = 0;
        outfd.put(c);
    }
}
    fd.close();
    outfd.close();
    return 0;
}
