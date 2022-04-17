/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 01:14:43 by misaev            #+#    #+#             */
/*   Updated: 2022/04/16 02:48:26 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, int sign, int execute):target(name),req_sign(sign),req_exec(execute)
{
    if (this->req_sign > 145)
    {
        throw(GradeTooLowException());
    }
    else if (this->req_exec > 137)
    {
        throw(GradeTooLowException());
    }
    std::ofstream outfile (this->target + "_shrubbery ");

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
    std::cout << "A tree was drawn in " << this->target << "_shrubbery file" << std::endl;
}