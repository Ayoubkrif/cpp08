/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tfunctions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:22:42 by aykrifa           #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>

template <typename T>

void	print(T const &t)
{
	std::cout << t << std::endl;
}

template <typename T>

void	incr(T &t)
{
	++t;
}

template <typename T>

bool	is_neg(T const &t)
{
	return (t < 0);
}
