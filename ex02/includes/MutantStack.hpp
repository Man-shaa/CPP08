/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:33:25 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/29 18:08:03 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <algorithm>

template <typename T>

class MutantStack : public std::stack<T>
{
	public:

		MutantStack<T>(void);
		MutantStack<T>(MutantStack const &copy);
		~MutantStack<T>(void);

		MutantStack	&operator = (MutantStack const &toCopy);

		typedef	typename std::stack<T>::container_type::iterator iterator;
		iterator	begin()
		{
			return (this->c.begin());
		}
    	iterator	end()
		{
			return (this->c.end());
		}
};

template <typename T>

MutantStack<T>::MutantStack(void)
{
	std::cout << "MutantStack default constructor called" << std::endl;
	return ;
}

template <typename T>

MutantStack<T>::MutantStack(MutantStack const &toCopy)
{
	if (this != &toCopy)
		*this = toCopy;
	std::cout << "MutantStack copy constructor called" << std::endl;
	return ;
}

template <typename T>

MutantStack<T>::~MutantStack(void)
{
	std::cout << "MutantStack destructor called" << std::endl;
	return ;
}

template <typename T>

MutantStack<T>	&MutantStack<T>::operator = (MutantStack const &toCopy)
{
	(void)toCopy;
	return (*this);
}


#endif
