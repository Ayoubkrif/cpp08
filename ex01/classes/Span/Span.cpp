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
#include <algorithm>
#include <cstdlib>
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

Span::Span(const Span& other) : N(other.N), _v(other._v)
{
}

Span	&Span::operator=(const Span& rhs)
{
	if (this != &rhs)
	{
		if (this->N < rhs.N)
			throw (std::runtime_error("rhs too larg for ASSIGN"));
		this->_v = rhs._v;
	}
	return (*this);
}

void	Span::addNumber(int n)
{
	if (_v.size() == this->N)
		throw (std::runtime_error("FULL cannot addNumber()"));
	_v.push_back(n);
}

unsigned int	Span::shortestSpan(void)
{
	if (_v.size() <= 1)
		throw (std::runtime_error("Too few elements for shortestSpan()"));
    unsigned int shortSpan = (unsigned int)-1; // Max value for unsigned int
    for (size_t i = 1; i < _v.size(); ++i)
    {
        unsigned int diff = (unsigned int)_v[i] - (unsigned int)_v[i - 1];
        if (diff < shortSpan)
            shortSpan = diff;
    }
	return (shortSpan);
}

unsigned int	Span::longestSpan(void)
{
	if (_v.size() <= 1)
		throw (std::runtime_error("Too few elements for longestSpan()"));
	std::sort(_v.begin(), _v.end());
	unsigned int	longSpan = (unsigned int)_v.back() - (unsigned int)_v.front();
	return (longSpan);
}

const std::vector<int>	Span::getNumbers(void) const
{
	return (this->_v);
}
