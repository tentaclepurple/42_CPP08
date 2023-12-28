/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:53:47 by imontero          #+#    #+#             */
/*   Updated: 2023/12/27 18:53:47 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	std::list<int> l;
	std::deque<int> d;

	//Vector
	std::vector<int> v;
	// Insert elements at the end of the vector
    for (int i = 1; i <= 5; ++i)
        v.push_back(i);
	// access all elements in a vector using iterator
    std::cout << "Vector elements: ";
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        std::cout << *it << " ";
    std::cout << "\n";

    //	Insert an element before the specified position
	v.insert(v.begin() + 2, 10);
	std::cout << "Vector elements 'v.insert(v.begin() + 2, 10)': ";
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		std::cout << *it << " ";
    std::cout << "\n";

    // Erase an element at specified position
    v.erase(v.begin() + 3);
	std::cout << "Vector elements 'v.erase(v.begin() + 3)': ";
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    	std::cout << *it << " ";
    std::cout << "\n";

	
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);

	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	d.push_back(4);
	d.push_back(5);

	try
	{
		std::cout << *easyfind(v, 3) << std::endl;
		std::cout << *easyfind(l, 5) << std::endl;
		std::cout << *easyfind(d, 3) << std::endl;
		std::cout << *easyfind(v, 6) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}
	return (0);
}