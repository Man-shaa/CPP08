/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:09:24 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/29 17:15:08 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(0)
{
	std::cout << "Span default constructor called" << std::endl;
	return ;
}

Span::Span(unsigned long N) : _N(N)
{
	std::cout << "Span constructor called" << std::endl;
	return ;
}

Span::Span(Span const &toCopy)
{
	if (this != &toCopy)
		*this = toCopy;
	std::cout << "Span copy constructor called" << std::endl;
	return ;
}

Span::~Span(void)
{
	std::cout << "Span destructor called" << std::endl;
	return ;
}

Span	&Span::operator = (Span const &toCopy)
{
	_N = toCopy._N;
	_list.assign(toCopy._list.begin(), toCopy._list.end());
	return (*this);
}

const char *Span::TooManyNumbersException::what() const throw()
{
	return ("Exception : Array cannt accept any more numbers");
}

void	Span::addNumber(int n)
{
	if (_list.size() >= _N)
		throw (TooManyNumbersException());
	_list.push_back(n);
}

int		Span::shortestSpan()
{
	_list.sort();
	printList();
	std::list<int>::iterator itNext = _list.begin();
	itNext++;

	int	diffSave = 2147483647;
	for (std::list<int>::iterator it = _list.begin(); it != _list.end(); it++)
	{
		std::cout << *it << " | " << *itNext << std::endl;
		if (abs(*itNext - *it) < diffSave)
			diffSave = abs(*itNext - *it);
		itNext++;
	}
	return (diffSave);
}

int		Span::longestSpan()
{
	_list.sort();
	int	biggest = _list.back();
	int	smallest = _list.front();
	std::cout << "The biggest differentiel is [" << biggest - smallest << "] between "
	<< biggest << " and " << smallest << std::endl;
	std::cout << " biggest : " << biggest << std::endl;
	std::cout << " smallest : " << smallest << std::endl;
	std::cout << " diff : " << biggest - smallest << std::endl;
	return (biggest - smallest);
}

void	Span::printList()
{
	std::list<int>::iterator it = _list.begin();
	while (it != _list.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}
