/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 03:16:06 by misaev            #+#    #+#             */
/*   Updated: 2022/04/22 02:05:23 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string name, int sign, int execute):name(name),req_sign(sign),req_exec(execute)
{
    if (this->req_sign > 75)
    {
        throw(GradeTooLowException());
    }
    else if (this->req_exec > 45)
    {
        throw(GradeTooLowException());
    }
    std::cout << GRN << "📝 RobotomyRequestForm Successfully created" << NC << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == true)
    {
        if (executor.getGrade() <= this->req_exec)
        {
            srand(time(0));
            int nbr_rand = rand() % 10 + 1;
            std::cout << RED << "*bruit de perceuse*" << NC << std::endl;
            if (nbr_rand % 2 == 0)
                std::cout << GRN << "The " << this->name << " has been robotised" << NC << std::endl;
            else
                std::cout << RED << "The operation has failed" << NC << std::endl;   
        }
        else
            throw(GradeTooLowException());
    }
    else
        std::cout << RED << this->name << "is not signed !" << NC << std::endl;
}

std::string RobotomyRequestForm::getName() const
{
    return this->name;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}