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
template <typename type>
class MutantStack: public std::stack<type>
{
    typedef typename std::stack<type>::container_type::iterator					iterator;
    typedef typename std::stack<type>::container_type::const_iterator			const_iterator;
    typedef typename std::stack<type>::container_type::reverse_iterator			reverse_iterator;
    typedef typename std::stack<type>::container_type::const_reverse_iterator	const_reverse_iterator;

	iterator	begin(void);
	iterator	end(void);

	const_iterator	cbegin(void);
	const_iterator	cend(void);

	reverse_iterator	rbegin(void);
	reverse_iterator	rend(void);

	const_reverse_iterator	cbegin(void);
	const_reverse_iterator	cend(void);
};
