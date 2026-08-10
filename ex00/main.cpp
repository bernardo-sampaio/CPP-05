/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:55:27 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/10 13:26:43 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    
    std::cout<<"===================TooHighGrade Test===================\n\n";
    try
    {
        Bureaucrat bur("Sampaio", 1);
        std::cout<<bur<<std::endl;
        bur.incrementGrade();
    }
    catch(std::exception& e)
    {
        std::cout<<e.what();
    }
    
    std::cout<<"\n\n===================TooLowGrade Test===================\n\n";
    try
    {
        Bureaucrat bur("Germano", 150);
        std::cout<<bur<<std::endl;
        bur.decrementGrade();
    }
    catch(std::exception& e)
    {
        std::cout<<e.what();
    }
    
    std::cout<<"\n\n===================Normal Test===================\n\n";
    try
    {
        Bureaucrat bur("Bernardo", 75);
        std::cout<<bur<<std::endl;
    }
    catch(std::exception& e)
    {
        std::cout<<e.what();
    }

    std::cout<<"\n\n===================TooLowGrade Instance Test===================\n\n";
    try
    {
        Bureaucrat bur("Bernardo", 152);
        std::cout<<bur<<std::endl;
    }
    catch(std::exception& e)
    {
        std::cout<<e.what();
    }

    std::cout<<"\n\n===================TooHighGrade Instance Test===================\n\n";
    try
    {
        Bureaucrat bur("Bernardo", 0);
        std::cout<<bur<<std::endl;
    }
    catch(std::exception& e)
    {
        std::cout<<e.what();
    }
    return 0;
}