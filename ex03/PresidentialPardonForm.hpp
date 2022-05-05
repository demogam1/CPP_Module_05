/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:46:54 by misaev            #+#    #+#             */
/*   Updated: 2022/05/05 11:06:13 by misaev           ###   ########.fr       */
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
        PresidentialPardonForm(std::string name, int sign, int exec);
        void execute(Bureaucrat const & executor) const;
        std::string getName() const;
    private:
        std::string name;
        int req_sign;
        int req_exec;
};