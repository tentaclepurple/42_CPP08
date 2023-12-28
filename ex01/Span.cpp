/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:47:46 by imontero          #+#    #+#             */
/*   Updated: 2023/12/27 19:47:46 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>

Span::Span() : _N(0) 
{
	throw (std::exception());
}

Span::Span(unsigned int N) : _N(N)
{
	if (N < 2)
		throw (std::exception());
	srand(time(NULL));
	for (unsigned int i = 0; i < N; i++)
		this->_vec.push_back(rand() % 100000);
	this->_vecOrdered = this->_vec;
	std::sort(this->_vecOrdered.begin(), this->_vecOrdered.end());

}

Span::Span(Span const & src) : _N(src._N), _vec(src._vec) {}

Span::~Span() {}

Span &	Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
		this->_N = rhs._N;
		this->_vec = rhs._vec;
	}
	return *this;
}

void	Span::addNumber(unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
		this->_vec.push_back(rand() % 100000);
	this->_vecOrdered = this->_vec;
	std::sort(this->_vecOrdered.begin(), this->_vecOrdered.end());
}

int		Span::shortestSpan()
{
	return (this->_vecOrdered[1] - this->_vecOrdered[0]);
}

int		Span::longestSpan()
{
	return (this->_vecOrdered.back() - this->_vecOrdered.front());
}

void	Span::printVec()
{
	for (unsigned int i = 0; i < this->_vec.size(); i++)
		std::cout << this->_vec[i] << " ";
	std::cout << std::endl;
}

void	Span::printVecOrd()
{
	for (unsigned int i = 0; i < this->_vecOrdered.size(); i++)
		std::cout << this->_vecOrdered[i] << " ";
	std::cout << std::endl;
}

