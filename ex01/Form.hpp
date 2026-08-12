/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 14:53:29 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/12 11:10:37 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;
    public:
        Form();
        Form(std::string name, const int gradeToSign, const int gradeToExecute);
        Form(const Form& obj);
        Form& operator=(const Form& obj);
        ~Form();
        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        const std::string& getName(void) const;
        int getGradeToSign(void) const;
        int getGradeToExecute(void) const;
        bool getIsSigned() const;
        void beSigned(Bureaucrat& bur);
        
};

std::ostream& operator<<(std::ostream& o, const Form& obj);

#endif