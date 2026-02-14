/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 11:08:29 by aykrifa           #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
template <typename type, typename container = std::deque<type> >
class MutantStack: public std::stack<type, container>
{
	public:
		MutantStack(void) : std::stack<type, container>() {}
		MutantStack(const MutantStack<type, container> &copy) : std::stack<type, container>(copy) {}
		MutantStack<type, container>	&operator=(const MutantStack<type, container> &other)
		{
			std::stack<type, container>::operator=(other);
			return (*this);
		}
		virtual ~MutantStack() {}

		typedef typename std::stack<type, container>::container_type::iterator					iterator;
		typedef typename std::stack<type, container>::container_type::reverse_iterator			reverse_iterator;

		iterator	begin(void){return this->c.begin();};
		iterator	end(void){return this->c.end();};
		reverse_iterator	rbegin(void){return this->c.rbegin();};
		reverse_iterator	rend(void){return this->c.rend();};
};
