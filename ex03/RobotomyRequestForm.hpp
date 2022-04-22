/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 03:16:09 by misaev            #+#    #+#             */
/*   Updated: 2022/04/22 02:02:51 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm(std::string name, int sign, int execute);
        void execute(Bureaucrat const & executor) const;
        std::string getName() const;
        ~RobotomyRequestForm();
    private:
        const std::string name;
        const int req_sign;
        const int req_exec;
};