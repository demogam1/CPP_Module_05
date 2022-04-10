/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 08:25:17 by misaev            #+#    #+#             */
/*   Updated: 2022/04/06 18:53:15 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <iostream>

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
        void upGrade();
        void downGrade();
    private:
        Bureaucrat();
        const std::string name;
        int grade;
};
std::ostream &operator<<(std::ostream &b, Bureaucrat const &c);