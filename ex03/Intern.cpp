/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 01:22:04 by misaev            #+#    #+#             */
/*   Updated: 2022/04/22 03:13:36 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Form *Intern::makeForm(std::string form, std::string cible)
{
    std::string form_tab[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    int i  = 0;
    while (i < 4)
    {
        if (form == form_tab[i])
            break;
        else
            i++;
    }
    switch (i)
    {
        case 0:
            return new RobotomyRequestForm(cible, 1, 1);
        case 1:
            return new PresidentialPardonForm(cible, 1, 1);
        case 2:
            return new ShrubberyCreationForm(cible, 1, 1);
        default:
            throw(NonExistingForm());
    }
}