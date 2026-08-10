/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 14:53:21 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/10 16:20:47 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): gradeToExecute(1), gradeToSign(1), name("Bureaucrat")
{
    this->isSigned = false;
}
    

Form::Form(std::string name, int gradeToSign, int gradeToExecute):gradeToSign(gradeToSign),gradeToExecute(gradeToExecute), name("Bureaucrat")
{
    this->isSigned = false;
}

Form::Form(const Form& obj): gradeToSign(obj.gradeToSign),gradeToExecute(obj.gradeToExecute), name(obj.name)
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

int Form::getGradeToSign(void) const
{
    return this->gradeToSign;
}
int Form::getGradeToExecute(void) const
{
    return this->gradeToExecute;
}

bool Form::getIsSigned()const
{
    return this->isSigned;
}

void Form::beSigned(Bureaucrat& bur)
{
    if (bur.getGrade() <= this->gradeToSign)
        this->isSigned = true;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& o, const Form& obj)
{
    o << obj.getName()<<obj.getGradeToSign()<<obj.getGradeToExecute()<<obj.getIsSigned;
    return o;
}