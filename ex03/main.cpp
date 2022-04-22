/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 08:25:20 by misaev            #+#    #+#             */
/*   Updated: 2022/04/22 03:15:34 by misaev           ###   ########.fr       */
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
    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    std::cout << rrf->getName() << std::endl;
    toto = someRandomIntern.makeForm("robotomy request", "Mender");
    std::cout << toto->getName() << std::endl; 
    titi = someRandomIntern.makeForm("toto", "Titi"); // <- this non existent form
    std::cout << titi->getName() << std::endl;
}