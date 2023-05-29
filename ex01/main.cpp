/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:16:22 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/29 17:18:36 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span	Shanley(5);

	Shanley.addNumber(-5);
	Shanley.addNumber(-1);
	Shanley.addNumber(-4);
	Shanley.addNumber(-34);
	Shanley.addNumber(-12);

	Shanley.printList();
	
	// Operator =

	// Span	Manu;
	// Manu = Shanley;
	// Manu.printList();

	Shanley.longestSpan();
	std::cout << Shanley.shortestSpan() << std::endl;
	return (0);
}