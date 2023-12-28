/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 08:18:54 by imontero          #+#    #+#             */
/*   Updated: 2023/12/28 08:18:54 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T, typename Container=std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
	public:
		MutantStack(void) {}
		MutantStack(MutantStack const & src):  std::stack<T, Container>(src) {}

		~MutantStack(void) {}

		MutantStack & operator=(MutantStack const & rhs)
		{
			std::stack<T, Container>::operator=(rhs);
			return (*this);
		}

		typedef typename Container::iterator iterator;

		iterator begin(void)
		{
			return (this->c.begin());
		}

		iterator end(void)
		{
			return (this->c.end());
		}
};

#endif
