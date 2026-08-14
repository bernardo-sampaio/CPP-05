/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 10:24:12 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/14 10:48:49 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class AForm;

class Intern
{
    public:
        Intern();
        Intern(const Intern& obj);
        Intern& operator=(const Intern& obj);
        ~Intern();
        AForm* makeForm(std::string formName, std::string target);
};

#endif