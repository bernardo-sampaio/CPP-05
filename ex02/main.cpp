/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:55:27 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/13 16:10:49 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    std::cout<<"===========Test ShrubberyCreationForm===========\n";
    
    Bureaucrat burS("Bernardo", 1);
    ShrubberyCreationForm formS("B28");

    std::cout << formS << std::endl;

    burS.signForm(formS);
    burS.executeForm(formS);

    std::cout<<"\n===========Test RobotomyRequestForm===========\n";
    Bureaucrat burR("Bernardo", 20);
    RobotomyRequestForm formR("C28");

    std::cout << formR << std::endl;
    
    burR.signForm(formR);
    burR.executeForm(formR);
    return 0;
}