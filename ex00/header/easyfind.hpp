/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 11:01:29 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/18 14:27:03 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iterator>
#include <algorithm>

template <typename T>
typename T::iterator	easyfind(T container, int n)
{
	int	*p = std::find(container.begin(), container.end(), n);
	if (p != container.end())
		return (p);
	throw (std::exception e);
}
