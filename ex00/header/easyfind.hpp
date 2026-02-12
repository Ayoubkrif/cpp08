/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 11:01:29 by aykrifa           #+#    #+#             */
/*   Updated: 2026/02/12 10:00:00 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iterator>
#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator	easyfind(T &container, int n)
{
	typename T::iterator it = std::find(container.begin(), container.end(), n);
	return (it);
}
