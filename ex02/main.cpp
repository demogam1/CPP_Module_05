/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 08:25:20 by misaev            #+#    #+#             */
/*   Updated: 2022/05/09 14:54:03 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    // Form titi(); /* <-- cannot initialize */
    PresidentialPardonForm pardon("Toto");
    RobotomyRequestForm robot("Tata");
    ShrubberyCreationForm tree("Tree");
    try
    {        
        Bureaucrat titi("titi", 150);
        pardon.beSigned(titi);
        titi.executeForm(pardon);
        tree.beSigned(titi);
        titi.executeForm(tree);
        robot.beSigned(titi);
        titi.executeForm(robot);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}