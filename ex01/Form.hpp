/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 00:10:28 by misaev            #+#    #+#             */
/*   Updated: 2022/04/10 03:18:41 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class Form
{
    public:
        /* Forme Canonique */ 
        Form(const Form &p);
        Form &operator=(const Form &p);
        ~Form();
        /* END */
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return("Erreur grade too high!");
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return("Erreur grade too low!");
                }
        };
        Form(std::string str_name, int sign, int execute);
        std::string getName() const;
        bool getSign() const;
        int getReqSign() const;
        int getReqExec() const;
    private:
        Form();
        const std::string name;
        bool sign;
        const int req_sign;
        const int req_exec;
};

std::ostream &operator<<(std::ostream &b, Bureaucrat const &c);