/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 00:10:28 by misaev            #+#    #+#             */
/*   Updated: 2022/05/09 14:50:37 by misaev           ###   ########.fr       */
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
        Form(std::string str_name, int sign, int execute);
        Form(const Form &p);
        Form &operator=(const Form &p);
        virtual ~Form();
        /* END */
        /*-----------------*/
        /* Constructeur */ 
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
        virtual void execute(Bureaucrat const & executor) const = 0;
        void beSigned(Bureaucrat &p);
        virtual std::string getName() const;
        bool getSign() const;
        virtual int getReqSign() const;
        virtual int getReqExec() const;
    private:
        const std::string name;
        bool sign;
        const int req_sign;
        const int req_exec;
};

std::ostream &operator<<(std::ostream &b, Form const &c);