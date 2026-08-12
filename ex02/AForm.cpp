/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 14:53:21 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/12 15:07:29 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name("Bureaucrat"), gradeToSign(1), gradeToExecute(1)
{
    this->isSigned = false;
}
    

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute): name(name), 
gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
    this->isSigned = false;
}

AForm::AForm(const AForm& obj):  name(obj.name), 
gradeToSign(obj.gradeToSign), gradeToExecute(obj.gradeToExecute)
{
    this->isSigned = obj.isSigned;
}


AForm& AForm::operator=(const AForm& obj)
{
    if (this != &obj)
        this->isSigned = obj.isSigned;
    return *this;
}

AForm::~AForm()
{}

const std::string& AForm::getName(void) const
{
    return this->name;
}

bool AForm::getIsSigned()const
{
    return this->isSigned;
}

int AForm::getGradeToSign(void) const
{
    return this->gradeToSign;
}


int AForm::getGradeToExecute(void) const
{
    return this->gradeToExecute;
}

std::ostream& operator<<(std::ostream& o, const AForm& obj)
{
    o <<"Name form: "<<obj.getName()
    <<"\nGrade to sign: "<<obj.getGradeToSign()
    <<"\nGrade to execute: "<<obj.getGradeToExecute()
    <<"\nsigned: "<<obj.getIsSigned()<<std::endl;
    return o;
}

void AForm::beSigned(Bureaucrat& bur)
{
    if (bur.getGrade() <= this->gradeToSign)
        this->isSigned = true;
    else
        throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "AForm grade is too high.";   
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "AForm grade is too low.";
}
