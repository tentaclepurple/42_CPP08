/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:43:14 by imontero          #+#    #+#             */
/*   Updated: 2023/12/27 19:43:14 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_vec;
		std::vector<int>	_vecOrdered;
	
	public:
		Span();
		Span(unsigned int N);
		Span(Span const & src);
		~Span();

		Span &	operator=(Span const & rhs);

		void	addNumber(unsigned int n);
		int		shortestSpan();
		int		longestSpan();
		void	printVec();
		void	printVecOrd();

};

#endif

