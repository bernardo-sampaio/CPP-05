/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:54:42 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/07 16:03:17 by bsampaio         ###   ########.fr       */
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
        class GradeTooHighException: public std::exception
        { 
            virtual const char* what() const throw();
        };
        class GradeTooLowException: public std::exception
        { 
            const char* what() const throw();
        };
        Bureaucrat(int grade);
        ~Bureaucrat();
        const std::string& getName() const;
        int getGrate() const;
        void incrementGrade();
        void decrementGrade();
};

#endif

