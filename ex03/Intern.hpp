/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 01:22:14 by misaev            #+#    #+#             */
/*   Updated: 2022/04/22 03:13:53 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"


class RobotomyRequestForm;

class Intern
{
    public:
        Intern();
        class NonExistingForm : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return("This Form does not exist !");
                }
        };
        ~Intern();
        Form *makeForm(std::string form, std::string cible);
    private:
};
