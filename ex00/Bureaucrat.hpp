/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:54:42 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/10 11:12:31 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat& operator=(const Bureaucrat& obj);
        Bureaucrat(int grade);
        ~Bureaucrat();
        class GradeTooHighException: public std::exception
        { 
            virtual const char* what() const throw();
        };
        class GradeTooLowException: public std::exception
        { 
            const char* what() const throw();
        };
        const std::string& getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
};

#endif

