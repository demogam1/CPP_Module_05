/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 08:25:14 by misaev            #+#    #+#             */
/*   Updated: 2022/05/05 12:14:42 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*------------------Forme canonique------------------*/
Bureaucrat::Bureaucrat():name("Default_Bureaucrat"),grade(150)
{
    std::cout << GRN << "Default Bureaucrat Constructor Called" << NC << std::endl;
}

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
    if (this->grade == 1)
        throw(Bureaucrat::GradeTooHighException());
    else
        this->grade--;
}

void Bureaucrat::downGrade()
{
    if (this->grade == 150)
        throw(Bureaucrat::GradeTooLowException());
    else
        this->grade++;
}
std::ostream &operator<<(std::ostream &b, Bureaucrat const &c)
{
    b << "Bureaucrat name : " << c.getName() << " Bureaucrat grade : " << c.getGrade() << std::endl;
    return b;
}