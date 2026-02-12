/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:36:51 by aykrifa           #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */


#include <exception>
#include <iostream>
#include <vector>
#include "Span.hpp"
#include "iter.hpp"
#include "Tfunctions.hpp"
#include <algorithm>
#include <cstdlib> // pour atoi

int	main(int argc, char *argv[])
{
    if (argc < 3)
    {
        std::cout << "Usage: ./span [nb1] [nb2] ..." << std::endl;
        return 1;
    }

    std::vector<int> v;
    // fill vector
    for (int i = 1; i < argc; ++i)
    {
        v.push_back(std::atoi(argv[i]));
    }
    // sort
    std::sort(v.begin(), v.end());

    // Longest Span (Max - Min)
    unsigned int longest = (unsigned int)v.back() - (unsigned int)v.front();
    // Shortest Span previous - actual
    unsigned int shortest = (unsigned int)-1;
    for (size_t i = 1; i < v.size(); ++i)
    {
        unsigned int diff = (unsigned int)v[i] - (unsigned int)v[i - 1];
        if (diff < shortest)
            shortest = diff;
    }

	try
	{
		Span	sp(50);
		sp.addNumber(v.begin(), v.end());
		iter(sp.getNumbers(), print<int>);
		std::cout << "Longest span  : " << longest << "(main)" << std::endl;
		std::cout << "Shortest span : " << shortest << "(main)" << std::endl;
		std::cout << "Longest Span :" << sp.longestSpan() << std::endl;
		std::cout << "Shortest Span :" << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
