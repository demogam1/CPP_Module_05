/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 01:14:43 by misaev            #+#    #+#             */
/*   Updated: 2022/04/22 02:05:25 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, int sign, int execute):name(name),req_sign(sign),req_exec(execute)
{
    if (this->req_sign > 145)
    {
        throw(GradeTooLowException());
    }
    else if (this->req_exec > 137)
    {
        throw(GradeTooLowException());
    }
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

std::string ShrubberyCreationForm::getName() const
{
    return this->name;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}