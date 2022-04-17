/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 08:25:17 by misaev            #+#    #+#             */
/*   Updated: 2022/04/15 00:34:17 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
#include <fstream>
#include "Form.hpp"


class Form;

class Bureaucrat
{
    public:
        /* Forme Canonique */
        Bureaucrat(const Bureaucrat &p);
        Bureaucrat &operator=(const Bureaucrat &p);
        ~Bureaucrat();
        /* END */ 
        Bureaucrat(std::string str_name, int lvl);
        std::string getName() const;
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
        int getGrade() const;
        void signForm(Form &p);
        void upGrade();
        void downGrade();
    private:
        const std::string name;
        int grade;
};
std::ostream &operator<<(std::ostream &b, Bureaucrat const &c);