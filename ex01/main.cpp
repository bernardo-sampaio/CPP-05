/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:55:27 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/12 13:06:27 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bur("Bernardo", 1);
        Form form("B28", 1, 2);
        
        bur.signForm(form);
        std::cout<<form<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat bur("Sampaio", 150);
        Form form("B29", 150, 100);
        
        bur.signForm(form);
        std::cout<<form<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat bur("Germano", 3);
        Form form("B27", 200, 100);
        
        bur.signForm(form);
        std::cout<<form<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}