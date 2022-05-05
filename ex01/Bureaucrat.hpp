/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 08:25:17 by misaev            #+#    #+#             */
/*   Updated: 2022/05/05 12:12:50 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
#include "Form.hpp"
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"


class Form;

class Bureaucrat
{
    public:
        /* Forme Canonique */
        Bureaucrat();
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