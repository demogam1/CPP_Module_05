/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:21:26 by misaev            #+#    #+#             */
/*   Updated: 2022/05/09 16:14:36 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
    public:
        /* Forme Canonique */
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &p);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &p);
        ~ShrubberyCreationForm();
        /* END */
        ShrubberyCreationForm(std::string str_name);
        std::string getName() const;
        int getReqSign() const;
        int getReqExec() const;
        void execute(Bureaucrat const & executor) const;
    private:
        std::string name;
        int req_sign;
        int req_exec;
};
