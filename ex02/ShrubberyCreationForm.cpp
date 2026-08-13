/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 15:12:30 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/13 15:08:49 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj): AForm(obj), _target(obj._target)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    if (this != &obj)
        this->_target = obj._target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

const char* ShrubberyCreationForm::FileCreationException::what() const throw()
{
    return "Failed to open or create the file.";
}

void ShrubberyCreationForm::executeAction() const
{
    std::ofstream file((this->_target + "_shrubbery").c_str());
    if (!file)
        throw FileCreationException();
    file <<"   **   \n";
    file <<"  ****  \n";
    file <<" ****** \n";
    file <<" ****** \n";
    file <<"   || \n";
    file <<"   || \n";
    file <<"^^^^^^^^^\n\n";
    file <<"   %%   \n";
    file <<"  %%%%  \n";
    file <<" %%%%%% \n";
    file <<" %%%%%% \n";
    file <<"   || \n";
    file <<"   || \n";
    file <<"^^^^^^^^^\n";
    file.close();
}


