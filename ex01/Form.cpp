/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 14:53:21 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/12 12:29:13 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("Bureaucrat"), gradeToSign(1), gradeToExecute(1)
{
    this->isSigned = false;
}
    

Form::Form(std::string name, int gradeToSign, int gradeToExecute): name(name), 
gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
    this->isSigned = false;
}

Form::Form(const Form& obj):  name(obj.name), 
gradeToSign(obj.gradeToSign), gradeToExecute(obj.gradeToExecute)
{
    this->isSigned = obj.isSigned;
}


Form& Form::operator=(const Form& obj)
{
    if (this != &obj)
        this->isSigned = obj.isSigned;
    return *this;
}

Form::~Form()
{}

const std::string& Form::getName(void) const
{
    return this->name;
}

bool Form::getIsSigned()const
{
    return this->isSigned;
}

int Form::getGradeToSign(void) const
{
    return this->gradeToSign;
}


int Form::getGradeToExecute(void) const
{
    return this->gradeToExecute;
}

std::ostream& operator<<(std::ostream& o, const Form& obj)
{
    o <<"Name form: "<<obj.getName()
    <<"\nGrade to sign: "<<obj.getGradeToSign()
    <<"\nGrade to execute: "<<obj.getGradeToExecute()
    <<"\nsigned: "<<obj.getIsSigned()<<std::endl;
    return o;
}

void Form::beSigned(Bureaucrat& bur)
{
    if (bur.getGrade() <= this->gradeToSign)
        this->isSigned = true;
    else
        throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Form grade is too high.";   
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Form grade is too low.";
}
