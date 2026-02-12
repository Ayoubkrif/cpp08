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


#include <iostream>
#include <vector>
#include "Span.hpp"

int	main(int argc, char *argv[])
{
	(void)argc, (void)argv;
	int arr[] = {11, 23, 45, 89};
	int n = sizeof(arr) / sizeof(arr[0]);

	// Initialize the std::vector v by arr
	std::vector<int> v = {arr, arr + n};

	Span	sp(50);
	sp.addNumber(v.begin(), v.end());
	return (0);
}
