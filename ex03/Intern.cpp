/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 10:24:24 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/17 13:39:39 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{}
Intern::Intern(const Intern& obj)
{
    (void)obj;
}
Intern& Intern::operator=(const Intern& obj)
{
    (void)obj;
    return *this;
}

Intern::~Intern()
{}

AForm* createShrubbery(std::string target)
{
    return new ShrubberyCreationForm(target); 
}
AForm* createRobotomy(std::string target)
{
    return new RobotomyRequestForm(target); 
}
AForm* createPresidential(std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string formName, std::string target)
{
    std::string name[3];
    AForm* (*functions[3])(std::string);
    
    name[0] = "shrubbery creation";
    name[1] = "robotomy request";
    name[2] = "presidential pardon";
    functions[0] = createShrubbery;
    functions[1] = createRobotomy;
    functions[2] = createPresidential;

    for (int i = 0; i < 3; i++)
    {
        if (formName == name[i])
            return functions[i](target);
    }
    std::cout<<"Error: form '"<<formName<<"' does not exist.\n";
    return NULL;
}
