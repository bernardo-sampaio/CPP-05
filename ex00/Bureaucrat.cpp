/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:55:05 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/07 16:02:56 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade): grade(grade)
{}
Bureaucrat::~Bureaucrat()
{}

const char* Bureaucrat::GradeTooHighException::what() const
{
    //throw "testando";
    return "Grade too high.";
}

const char* Bureaucrat::GradeTooLowException::what() const
{
    //throw "testando";
    return "Grade too low.";
}

const std::string& Bureaucrat::getName() const
{
    return this->name;
}


int Bureaucrat::getGrate() const
{
    return this->grade;
}

void Bureaucrat::incrementGrade(void)
{
    try
    {
        this->grade--;
        if (this->grade < 1)
            throw GradeTooHighException();
    }
    catch (std::exception & e)
    {
        
    }
}

void Bureaucrat::decrementGrade(void)
{
    this->grade++;
}