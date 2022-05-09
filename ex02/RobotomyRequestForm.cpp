/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 03:16:06 by misaev            #+#    #+#             */
/*   Updated: 2022/05/09 13:19:21 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string name)
{
    this->name = name;
    this->req_exec = 45;
    this->req_sign = 72;
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

int RobotomyRequestForm::getReqSign() const
{
    return this->req_sign;
}

int RobotomyRequestForm::getReqExec() const
{
    return this->req_exec;    
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}