/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:46:54 by misaev            #+#    #+#             */
/*   Updated: 2022/04/22 03:04:28 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm(std::string name, int sign, int exec);
        void execute(Bureaucrat const & executor) const;
        std::string getName() const;
        ~PresidentialPardonForm();
    private:
        const std::string name;
        const int req_sign;
        const int req_exec;
};