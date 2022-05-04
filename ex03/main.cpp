/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 08:25:20 by misaev            #+#    #+#             */
/*   Updated: 2022/05/04 16:58:12 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    Form* rrf;
    Form* toto;
    Form* titi;
    try
    {
        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        toto = someRandomIntern.makeForm("robotomy request", "Mender");
        titi = someRandomIntern.makeForm("toto", "Titi"); // <- this non existent form  
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}