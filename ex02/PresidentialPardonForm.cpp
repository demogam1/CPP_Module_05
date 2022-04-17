/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:46:33 by misaev            #+#    #+#             */
/*   Updated: 2022/04/16 02:44:33 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name, int sign, int exec):target(name),req_sign(sign),req_exec(exec)
{
    if (this->req_sign > 25)
    {
        throw(GradeTooLowException());
    }
    else if (this->req_exec > 5)
    {
        throw(GradeTooLowException());
    }
    std::cout << this->target << " has got the presidential pardon" << std::endl;
}