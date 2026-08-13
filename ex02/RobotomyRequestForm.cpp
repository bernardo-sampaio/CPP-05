/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 15:18:30 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/13 15:39:53 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Roboto", 72, 45), _target("Default")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Roboto", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj): AForm(obj), _target(obj._target)
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    if (this != &obj)
        _target = obj._target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}