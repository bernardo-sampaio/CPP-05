/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:55:27 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/14 11:19:48 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

int main()
{
    Intern intern;
    Bureaucrat bur("Bernardo", 1);

    AForm* shrubbery = intern.makeForm("shrubbery creation", "home");
    AForm* robotomy = intern.makeForm("robotomy request", "Bender");
    AForm* pardon = intern.makeForm("presidential pardon", "Arthur Dent");
    AForm* invalid = intern.makeForm("coffee request", "Bernardo");

    if (shrubbery)
    {
        bur.signForm(*shrubbery);
        bur.executeForm(*shrubbery);
        delete shrubbery;
    }

    if (robotomy)
    {
        bur.signForm(*robotomy);
        bur.executeForm(*robotomy);
        delete robotomy;
    }

    if (pardon)
    {
        bur.signForm(*pardon);
        bur.executeForm(*pardon);
        delete pardon;
    }

    if (invalid)
        delete invalid;

    return 0;
}

