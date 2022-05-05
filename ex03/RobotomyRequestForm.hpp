/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 03:16:09 by misaev            #+#    #+#             */
/*   Updated: 2022/05/05 11:03:30 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
    public:
        /* Forme Canonique */
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &p);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &p);
        ~RobotomyRequestForm();
        /* END */
        RobotomyRequestForm(std::string name, int sign, int execute);
        void execute(Bureaucrat const & executor) const;
        std::string getName() const;
    private:
        std::string name;
        int req_sign;
        int req_exec;
};