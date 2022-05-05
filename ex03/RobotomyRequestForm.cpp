/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 03:16:06 by misaev            #+#    #+#             */
/*   Updated: 2022/05/05 11:04:23 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*------------------Forme canonique------------------*/

RobotomyRequestForm::RobotomyRequestForm():name("Default"),req_sign(75),req_exec(45)
{
    std::cout << GRN << "📝 RobotomyRequestForm Successfully created" << NC << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &p):name(p.name),req_sign(p.req_sign),req_exec(p.req_exec)
{
    
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &p)
{
    this->name = p.name;
    this->req_exec = p.req_exec;
    this->req_sign = p.req_exec;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Default RRF destructor Called" << std::endl;
}

/*------------------END------------------*/

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
