/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 08:25:20 by misaev            #+#    #+#             */
/*   Updated: 2022/04/20 01:01:15 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat titi("titi", 1);
    // Form titi(); /* <-- cannot initialize */
    PresidentialPardonForm pardon("Toto", 1, 1);
    RobotomyRequestForm robot("tata", 45, 20);
    ShrubberyCreationForm tree("tree", 100, 20);
    // robot.beSigned(titi);
    robot.execute(titi);
    pardon.beSigned(titi);
    pardon.execute(titi);
    tree.beSigned(titi);
    tree.execute(titi);
    
}