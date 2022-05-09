/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:46:33 by misaev            #+#    #+#             */
/*   Updated: 2022/05/09 14:32:32 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name)
{
    this->name = name;
    this->req_exec = 5;
    this->req_sign = 25;
    std::cout << GRN << "📝 PresidentialPardonForm Successfully created" << NC << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == true)
    {
        if (executor.getGrade() <= this->req_exec)
            std::cout << this->name << CYN <<  " has got the Zaphod Beeblebrox pardon" << NC << std::endl;
        else
            throw(GradeTooLowException());
    }
    else
        std::cout << RED << this->name << "is not signed !" << NC << std::endl;
}

int PresidentialPardonForm::getReqSign() const
{
    return this->req_sign;
}

int PresidentialPardonForm::getReqExec() const
{
    return this->req_exec;    
}


PresidentialPardonForm::~PresidentialPardonForm()
{    
}