/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 00:10:28 by misaev            #+#    #+#             */
/*   Updated: 2022/05/04 16:13:27 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        /* Forme Canonique */ 
        Form();
        Form(const Form &p);
        Form &operator=(const Form &p);
        ~Form();
        /* END */
        /*-----------------*/
        /* Constructeur */ 
        void beSigned(Bureaucrat &p);
        Form(std::string str_name, int sign, int execute);
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
        std::string getName() const;
        bool getSign() const;
        int getReqSign() const;
        int getReqExec() const;
    private:
        const std::string name;
        bool sign;
        const int req_sign;
        const int req_exec;
};

std::ostream &operator<<(std::ostream &b, Form const &c);