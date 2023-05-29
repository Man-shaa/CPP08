/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:10:01 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/29 15:41:19 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>
# include <cmath>

class Span
{
	private:
		std::list<int>	_list;
		unsigned long	_N;

	public:

		Span(void);
		Span(unsigned long N);
		Span(Span const &copy);
		~Span(void);

		Span	&operator = (Span const &toCopy);

		class TooManyNumbersException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		void	addNumber(int n);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	printList(void);
};

#endif
