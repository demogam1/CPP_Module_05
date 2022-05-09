/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:46:33 by misaev            #+#    #+#             */
/*   Updated: 2022/05/09 16:19:27 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*------------------Forme canonique------------------*/
PresidentialPardonForm::PresidentialPardonForm()
{
    this->name = "Default";
    this->req_exec = 5;
    this->req_sign = 25;
    std::cout << GRN << "📝 PresidentialPardonForm Successfully created" << NC << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p)
{
    this->name = p.name;
    this->req_exec = p.req_exec;
    this->req_sign = p.req_sign;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &p)
{    
    this->name = p.name;
    this->req_exec = p.req_exec;
    this->req_sign = p.req_sign;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << RED << "❌ PresidentialPardonForm Destructor Called" << NC << std::endl;   
}
/*------------------END------------------*/


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

std::string PresidentialPardonForm::getName() const
{
    return this->name;
}