/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:21:26 by misaev            #+#    #+#             */
/*   Updated: 2022/05/09 14:49:08 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm(std::string str_name);
        ~ShrubberyCreationForm();
        std::string getName() const;
        int getReqSign() const;
        int getReqExec() const;
        void execute(Bureaucrat const & executor) const;
    private:
        std::string name;
        int req_sign;
        int req_exec;
};
