/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:17:43 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/25 17:16:50 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <string>
# include <algorithm>

class	NoOccurenceFoundException : public std::exception
{
	public:
		virtual const char	*what() const throw();
};

template <typename T>
typename T::iterator	easyfind(T &tpl, int x)
{
	typename T::iterator res = find(tpl.begin(), tpl.end(), x);
	if (res == tpl.end())
		throw (NoOccurenceFoundException());
	return (res);
}

#endif
