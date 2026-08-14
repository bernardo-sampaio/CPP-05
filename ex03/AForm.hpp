/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 14:53:29 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/13 14:29:36 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;
    public:
        AForm();
        AForm(std::string name, const int gradeToSign, const int gradeToExecute);
        AForm(const AForm& obj);
        AForm& operator=(const AForm& obj);
        ~AForm();
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
        class NotSignedException: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        const std::string& getName(void) const;
        int getGradeToSign(void) const;
        int getGradeToExecute(void) const;
        bool getIsSigned() const;
        void beSigned(Bureaucrat& bur);
        virtual void execute(Bureaucrat const & executor) const;
        virtual void executeAction() const = 0;
};

std::ostream& operator<<(std::ostream& o, const AForm& obj);

#endif