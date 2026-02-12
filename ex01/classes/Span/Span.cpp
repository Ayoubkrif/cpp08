/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:41:21 by aykrifa           #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"
#include <stdexcept>

Span::Span(void) : N(0)
{
}

Span::Span(unsigned int n) : N(n)
{
}

Span::~Span(void)
{
}

Span::Span(const Span& other) : N(other.N), _numbers(other._numbers)
{
}

Span	&Span::operator=(const Span& rhs)
{
	if (this != &rhs)
	{
		if (this->N < rhs.N)
			throw (std::runtime_error("rhs too larg for ASSIGN"));
		this->_numbers = rhs._numbers;
	}
	return (*this);
}

void	Span::addNumber(int n)
{
	if (_numbers.size() == this->N)
		throw (std::runtime_error("FULL cannot addNumber()"));
	_numbers.insert(n);
}

unsigned int	Span::shortestSpan(void)
{
	if (_numbers.size() >= 1)
		throw (std::runtime_error("Too few elements for shortestSpan()"));
}

unsigned int	Span::longestSpan(void)
{
	if (_numbers.size() >= 1)
		throw (std::runtime_error("Too few elements for longestSpan()"));
}
