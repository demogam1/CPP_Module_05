/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:21:26 by misaev            #+#    #+#             */
/*   Updated: 2022/05/05 11:04:42 by misaev           ###   ########.fr       */
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
        ShrubberyCreationForm(std::string str_name, int sign, int execute);
        void execute(Bureaucrat const & executor) const;
        std::string getName() const;
    private:
        std::string name;
        int req_sign;
        int req_exec;
};
