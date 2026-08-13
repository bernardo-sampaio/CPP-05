/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:55:05 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/13 14:57:49 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Bureaucrat"), grade(1)
{}
Bureaucrat::Bureaucrat(std::string bname, int grade): name(bname)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj): name(obj.getName()), grade(obj.getGrade()) 
{}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    if (this != &obj)
        this->grade = obj.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat()
{}
std::ostream& operator<<(std::ostream& o, const Bureaucrat& obj)
{
    o << obj.getName() << ", bureaucrat grade " << obj.getGrade()<<".";
    return o;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "This bureaucrat has Grade too high.\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "This bureaucrat has Grade too low.\n";
}

const std::string& Bureaucrat::getName() const
{
    return this->name;
}


int Bureaucrat::getGrade() const
{
    return this->grade;
}


void Bureaucrat::incrementGrade(void)
{
    if (this->grade == 1)
        throw GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrementGrade(void)
{
    if(this->grade == 150)
        throw GradeTooLowException();
    this->grade++;
}

void Bureaucrat::signForm(AForm& form)
{
    try
    {
        form.beSigned(*this);
        std::cout<<this->name<<" signed "<<form.getName()<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout<<this->name<<" couldn't to sign "<<form.getName()<<" because "<<e.what()<<std::endl;
    }
    
}
void Bureaucrat::executeForm(AForm& form)
{
    try
    {
        form.execute(*this);
        std::cout<< this->getName()<<" executed "<<form.getName()<<std::endl;
    }
    catch(std::exception& e)
    {
        std::cout<<this->getName()<<" couldn't execute "<<form.getName()<<" because "<<e.what()<<std::endl;   
    }
}
