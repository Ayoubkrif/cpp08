/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 11:21:00 by aykrifa           #+#    #+#             */
/*   Updated: 2026/02/12 10:38:14 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

void	tryWrongContainer(void)
{
	// std::vector<std::string> myvector;
	// for (int i=1; i<=5; i++)
	// 	myvector.push_back("a");
	// try
	// {
	// 	std::vector<std::string>::iterator it;
	//
	// 	for (int i = -5; i < 10; i++)
	// 	{
	// 		it = easyfind(myvector, i);
	// 		(it == myvector.end()) ? (std::cout << i << " not found !")
	// 			: (std::cout << i << " caught :" << *it);
	// 		std::cout << std::endl;
	// 	}
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
}

int main ()
{
	std::vector<int> myvector;
	for (int i=1; i<=5; i++)
		myvector.push_back(i);

	std::cout << "myvector contains:";
	for (std::vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

		std::vector<int>::iterator it;
	
		for (int i = -5; i < 10; i++)
		{
			std::cout << i << " ";
			try
			{
				it = easyfind(myvector, i);
				std::cout << "caught";
			}
			catch (std::exception &e)
			{
				std::cerr << e.what() << std::endl;
			}
			std::cout << std::endl;
		}

	tryWrongContainer();
	return (0);
}
