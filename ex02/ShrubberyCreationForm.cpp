/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 01:14:43 by misaev            #+#    #+#             */
/*   Updated: 2022/05/09 14:49:49 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

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

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}