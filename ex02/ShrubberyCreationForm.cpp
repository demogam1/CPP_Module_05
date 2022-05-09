/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 01:14:43 by misaev            #+#    #+#             */
/*   Updated: 2022/05/09 16:19:30 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*------------------Forme canonique------------------*/
ShrubberyCreationForm::ShrubberyCreationForm()
{
    this->name = "Default";
    this->req_exec = 5;
    this->req_sign = 25;
    std::cout << GRN << "📝 ShrubberyCreationForm Successfully created" << NC << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &p)
{
    this->name = p.name;
    this->req_exec = p.req_exec;
    this->req_sign = p.req_sign;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &p)
{    
    this->name = p.name;
    this->req_exec = p.req_exec;
    this->req_sign = p.req_sign;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << RED << "❌ ShrubberyCreationForm Destructor Called" << NC << std::endl;   
}
/*------------------END------------------*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string name)
{
    this->name = name;
    this->req_exec = 145;
    this->req_sign = 137;
    std::cout << GRN << "📝 RobotomyRequestForm Successfully created" << NC << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == true)
    {
        if (executor.getGrade() <= this->req_exec)
        {
            std::ofstream outfile (this->name + "_shrubbery ");
            outfile << "            # #### #### " << std::endl;
            outfile << "         ### ###|### |/####" << std::endl;
            outfile << "      #####/ ##|/##/_/##/_#" << std::endl;
            outfile << "    ###  #####|/ ## # ###" << std::endl;
            outfile << "   ##_####### | #/###_/_####" << std::endl;
            outfile << "  ## #### # # #| /  #### ##/##" << std::endl;
            outfile << "   __#_--###`  |{,###---###-~" << std::endl;
            outfile << "             / }{" << std::endl;
            outfile << "               }{" << std::endl;
            outfile << "               }{" << std::endl;
            outfile << "               }{" << std::endl;
            outfile << "     , -=-~{=--^--=}~-=-" << std::endl;
            outfile.close();
            std::cout << GRN << "A tree was drawn in " << this->name << "_shrubbery file" << NC << std::endl;
        }
        else
            throw(GradeTooLowException());
    }
    else
        std::cout << RED << this->name << "is not signed !" << NC << std::endl;
}

int ShrubberyCreationForm::getReqSign() const
{
    return this->req_sign;
}

int ShrubberyCreationForm::getReqExec() const
{
    return this->req_exec;    
}

std::string ShrubberyCreationForm::getName() const
{
    return this->name;
}