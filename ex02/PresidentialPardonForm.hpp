/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:46:54 by misaev            #+#    #+#             */
/*   Updated: 2022/04/17 03:49:00 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm(std::string name, int sign, int exec);
        ~PresidentialPardonForm();
    private:
        const std::string target;
        const int req_sign;
        const int req_exec;
};