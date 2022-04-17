/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 03:16:06 by misaev            #+#    #+#             */
/*   Updated: 2022/04/15 04:10:31 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string name, int sign, int execute):target(name),req_sign(sign),req_exec(execute)
{
    if (this->req_sign > 75)
    {
        throw(GradeTooLowException());
    }
    else if (this->req_exec > 45)
    {
        throw(GradeTooLowException());
    }
    int nbr_rand = rand() % 1 + 1;
    std::cout << "*bruit de perceuse*" << std::endl;
    if (nbr_rand == 1)
        std::cout << "The " << this->target << " has been robotised" << std::endl;
    else
        std::cout << "The operation has failed" << std::endl;
}