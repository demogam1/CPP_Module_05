/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 08:25:14 by misaev            #+#    #+#             */
/*   Updated: 2022/04/13 04:00:41 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*------------------Forme canonique------------------*/

Bureaucrat::Bureaucrat(const Bureaucrat &p)
{
    this->grade = p.grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &p)
{
    this->grade = p.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor Called" << std::endl;
}
/*------------------END------------------*/
Bureaucrat::Bureaucrat(std::string str_name, int lvl):name(str_name)
{
    std::cout << "Constructor Called" << std::endl;
    if (lvl > 150)
        throw(Bureaucrat::GradeTooLowException());
    else if (lvl < 1)
        throw(Bureaucrat::GradeTooHighException());
    else
        this->grade = lvl;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::upGrade()
{
    this->grade--;
    if (this->grade < 1)
        throw(Bureaucrat::GradeTooHighException());
}

void Bureaucrat::downGrade()
{
    this->grade++;
    if (this->grade > 150)
        throw(Bureaucrat::GradeTooLowException());
}

void Bureaucrat::signForm(Form &p)
{
    if (p.getSign() == true)
        std::cout << this->name << " signed " << p.getName() << std::endl;
    else if (this->getGrade() > p.getReqExec())
    {
        std::cout << this->name << " couldn't sign " << p.getName() << " because ";
        std::cout << "Grade too low" << std::endl;
    }
}

std::ostream &operator<<(std::ostream &b, Bureaucrat const &c)
{
    b << "Bureaucrat name : " << c.getName() << " Bureaucrat grade : " << c.getGrade() << std::endl;
    return b;
}