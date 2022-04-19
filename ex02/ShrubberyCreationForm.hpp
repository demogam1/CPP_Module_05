/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:21:26 by misaev            #+#    #+#             */
/*   Updated: 2022/04/19 03:49:44 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm(std::string str_name, int sign, int execute);
        void execute(Bureaucrat const & executor) const;
        ~ShrubberyCreationForm();
    private:
        const std::string name;
        const int req_sign;
        const int req_exec;
};
