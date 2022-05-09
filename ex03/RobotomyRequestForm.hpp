/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 03:16:09 by misaev            #+#    #+#             */
/*   Updated: 2022/05/09 16:13:01 by misaev           ###   ########.fr       */
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
        RobotomyRequestForm(std::string name);
        std::string getName() const;
        int getReqSign() const;
        int getReqExec() const;
        void execute(Bureaucrat const & executor) const;
    private:
        std::string name;
        int req_sign;
        int req_exec;
};