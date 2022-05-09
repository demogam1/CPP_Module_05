/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:46:54 by misaev            #+#    #+#             */
/*   Updated: 2022/05/09 15:29:56 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
    public:
        /* Forme Canonique */
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &p);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &p);
        ~PresidentialPardonForm();
        /* END */
        PresidentialPardonForm(std::string name);
        void execute(Bureaucrat const & executor) const;
        std::string getName() const;
        int getReqSign() const;
        int getReqExec() const;
    private:
        std::string name;
        int req_sign;
        int req_exec;
};