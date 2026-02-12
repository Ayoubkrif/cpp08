/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:41:26 by aykrifa           #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <set>

class Span
{
	public:
		Span(unsigned int n);
		~Span(void);
		Span(const Span& other);
		Span	&operator=(const Span& other);

		void			addNumber(int n);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);

	private:
		Span(void);
		const unsigned int	N;
		std::multiset<int>	_numbers;
};
