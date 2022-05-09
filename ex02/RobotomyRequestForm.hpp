/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 03:16:09 by misaev            #+#    #+#             */
/*   Updated: 2022/05/09 13:17:56 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm(std::string name);
        ~RobotomyRequestForm();
        int getReqSign() const;
        int getReqExec() const;
        void execute(Bureaucrat const & executor) const;
    private:
        std::string name;
        int req_sign;
        int req_exec;
};