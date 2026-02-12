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
#include <cstdlib>
#include <functional>
#include <iterator>
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
	std::multiset<int>::const_iterator first = _numbers.begin();
	std::multiset<int>::const_iterator second = first++;
	unsigned int	shortSpan = static_cast<unsigned int>(*first) - static_cast<unsigned int>(*second);
	while (second != _numbers.end())
	{
		unsigned int	actualSpan = static_cast<unsigned int>(*first) - static_cast<unsigned int>(*second);
		if (shortSpan > actualSpan)
			shortSpan = actualSpan;
		first = second;
		second++;
	}
	return (shortSpan);
}

unsigned int	Span::longestSpan(void)
{
	if (_numbers.size() >= 1)
		throw (std::runtime_error("Too few elements for longestSpan()"));
	unsigned int	longSpan = static_cast<unsigned int>(*_numbers.begin()) - static_cast<unsigned int>(*_numbers.rbegin());
	return (longSpan);
}
//
// template <typename T>
// void	Span::addNumber(typename T::iterator start, typename T::iterator end)
// {
//
// }
