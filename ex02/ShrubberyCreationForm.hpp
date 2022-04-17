/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:21:26 by misaev            #+#    #+#             */
/*   Updated: 2022/04/17 03:49:06 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm(std::string str_name, int sign, int execute);
        ~ShrubberyCreationForm();
    private:
        const std::string target;
        const int req_sign;
        const int req_exec;
};
