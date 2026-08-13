/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 15:18:30 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/13 15:58:54 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("Default")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target)
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

void RobotomyRequestForm::executeAction() const
{
    std::cout<<"* drilling noises *\n";
    if (std::rand() % 2 == 0)
        std::cout<<this->_target <<" has been robotomized successfully.";
    else
        std::cout<<"Robotomy failed.\n";
}