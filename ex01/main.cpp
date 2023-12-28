/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:44:09 by imontero          #+#    #+#             */
/*   Updated: 2023/12/27 21:44:09 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	try
	{
		Span	sp(10000);

		sp.printVec();
		sp.printVecOrd();

		sp.addNumber(500);

		sp.printVec();
		sp.printVecOrd();

		std::cout << "Shortest span: " << sp.shortestSpan() << "\n";
		std::cout << "Shortest span: " << sp.longestSpan() << "\n";
	}
	catch (std::exception &e)
	{
		std::cout << "Too small span\n";
	}


	return(0);
}