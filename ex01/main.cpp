/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 08:25:20 by misaev            #+#    #+#             */
/*   Updated: 2022/05/04 16:13:46 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat toto("toto", 1);
    Form papier("papier", 1, 3);
    try
    {
        papier.beSigned(toto);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    toto.signForm(papier);
}