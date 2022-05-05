/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 08:25:20 by misaev            #+#    #+#             */
/*   Updated: 2022/05/04 12:37:43 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat toto("toto", 150);
    Bureaucrat titi("titi", 1);
    try 
    {
        toto.downGrade();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        titi.upGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << titi;
    std::cout << toto;
    return 1;
}