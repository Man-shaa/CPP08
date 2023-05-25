/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:58:55 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/25 17:15:51 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int	main(void)
{
	std::list<int>				list;
	std::list<int>::iterator	it;

	list.push_back(10);
	list.push_back(0);
	list.push_back(40);
	list.push_back(5);
	list.push_back(-24);
	list.push_back(6);

	try
	{
		it = easyfind(list, -24);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}
