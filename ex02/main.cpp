/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:55:27 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/13 16:31:58 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::cout<<"===========Test ShrubberyCreationForm===========\n";
    
    Bureaucrat burS("Bernardo", 1);
    ShrubberyCreationForm formS("A28");

    std::cout << formS << std::endl;

    burS.signForm(formS);
    burS.executeForm(formS);

    std::cout<<"\n===========Test RobotomyRequestForm===========\n";
    Bureaucrat burR("Germano", 20);
    RobotomyRequestForm formR("B28");

    std::cout << formR << std::endl;
    
    burR.signForm(formR);
    burR.executeForm(formR);

    std::cout<<"\n===========Test PresidentialPardonForm===========\n";
    Bureaucrat burP("Sampaio", 2);
    PresidentialPardonForm formP("C28");

    std::cout << formP << std::endl;
    
    burP.signForm(formP);
    burP.executeForm(formP);
    return 0;
}