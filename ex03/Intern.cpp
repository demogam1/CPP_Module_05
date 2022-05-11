/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 01:22:04 by misaev            #+#    #+#             */
/*   Updated: 2022/05/11 10:53:00 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*------------------Forme canonique------------------*/
Intern::Intern()
{
    std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(const Intern &p)
{
    *this = p;
}

// Intern &Intern::operator=(const Intern &p)
// {
//     *this = p;
//     return *this;
// }

Intern::~Intern()
{
    std::cout << "Intern Destructor called" << std::endl;
}
/*------------------END------------------*/
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
        {
            this->db[0] = new RobotomyRequestForm(cible);
            return this->db[0];
        }
        case 1:
        {
            this->db[1] = new PresidentialPardonForm(cible);
            return this->db[1];
        }
        case 2:
        {
            this->db[2] = new ShrubberyCreationForm(cible);
            return this->db[2];
        }
        default:
            throw(NonExistingForm());
    }
}