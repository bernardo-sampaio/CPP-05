/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 15:12:30 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/12 15:26:52 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Bureaucrat.hpp"

class ShrubberyCreationForm: public AForm
{
    private:
        const int gradeToSign;
        const int gradeToExecute;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& obj);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
        ~ShrubberyCreationForm();
        
};

#endif