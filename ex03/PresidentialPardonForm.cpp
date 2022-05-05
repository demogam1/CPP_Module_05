/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:46:33 by misaev            #+#    #+#             */
/*   Updated: 2022/05/05 11:06:02 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*------------------Forme canonique------------------*/

PresidentialPardonForm::PresidentialPardonForm():name("Default"),req_sign(25),req_exec(5)
{
    std::cout << GRN << "📝 PresidentialPardonForm Successfully created" << NC << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p):name(p.name),req_sign(p.req_sign),req_exec(p.req_exec)
{
   
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
    std::cout << "Default PPF destructor Called" << std::endl;
}
/*------------------END------------------*/
PresidentialPardonForm::PresidentialPardonForm(std::string name, int sign, int exec):name(name),req_sign(sign),req_exec(exec)
{
    if (this->req_sign > 25)
    {
        throw(GradeTooLowException());
    }
    else if (this->req_exec > 5)
    {
        throw(GradeTooLowException());
    }
    std::cout << GRN << "📝 PresidentialPardonForm Successfully created" << NC << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == true)
    {
        if (executor.getGrade() < this->getReqExec())
            std::cout << this->name << CYN <<  " has got the Zaphod Beeblebrox pardon" << NC << std::endl;
        else
            throw(GradeTooLowException());
    }
    else
        std::cout << RED << this->name << "is not signed !" << NC << std::endl;
}

std::string PresidentialPardonForm::getName() const
{
    return this->name;
}
