/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 00:14:02 by misaev            #+#    #+#             */
/*   Updated: 2022/05/05 09:09:24 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*------------------Forme canonique------------------*/
Form::Form():name(" "), req_sign(150), req_exec(150)
{
    std::cout << "Form Default constructor called" << std::endl;
    this->sign = false;
}

Form::Form(const Form &p):name(p.name),req_sign(p.req_sign),req_exec(p.req_exec)
{
    this->sign = p.sign;
}

Form::~Form()
{
    std::cout << "Form Default constructor called" << std::endl;
}

Form &Form::operator=(const Form &p)
{
    this->sign = p.sign;
    return *this;    
}
/*------------------END------------------*/
Form::Form(std::string str_name, int sign, int execute):name(str_name),req_sign(sign),req_exec(execute)
{
    if (this->req_exec && this->req_sign > 150)
    {
        throw(Form::GradeTooLowException());
    }
    else if (this->req_exec && this->req_sign < 0)
    {
        throw(Form::GradeTooHighException());
    }
    this->sign = false;
}

std::string Form::getName() const
{
    return this->name;
}

bool Form::getSign() const
{
    return this->sign;
}

int Form::getReqSign() const
{
    return this->req_sign;
}

int Form::getReqExec() const
{
    return this->req_exec;    
}

void Form::beSigned(Bureaucrat &p)
{
    if (p.getGrade() <= this->req_sign)
        this->sign = true;
    else
        throw(Form::GradeTooLowException());
}

std::ostream &operator<<(std::ostream &b, Form const &c)
{
    b << "Form Name : " << c.getName() << std::endl;
    b << "Require grade to sign form : " << c.getReqSign() << std::endl;
    b << "Require grade to execute : " << c.getReqExec() << std::endl;
    b << "Is form signed : " << c.getSign() << std::endl;
    return b;
}