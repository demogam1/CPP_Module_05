/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:46:54 by misaev            #+#    #+#             */
/*   Updated: 2022/05/09 13:17:45 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm(std::string name);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;
        int getReqSign() const;
        int getReqExec() const;
    private:
        std::string name;
        int req_sign;
        int req_exec;
};