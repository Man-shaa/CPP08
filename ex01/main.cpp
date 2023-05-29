/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:16:22 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/29 17:24:06 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span	Shanley(5);

	Shanley.addNumber(5);
	Shanley.addNumber(-1);
	Shanley.addNumber(4);
	Shanley.addNumber(34);
	Shanley.addNumber(-12);

	Shanley.printList();
	
	// Operator =

	// Span	Manu;
	// Manu = Shanley;
	// Manu.printList();

	std::cout << Shanley.longestSpan() << std::endl;
	std::cout << Shanley.shortestSpan() << std::endl;
	return (0);
}

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return (0);
// }