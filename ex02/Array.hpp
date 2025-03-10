/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:13:41 by nponchon          #+#    #+#             */
/*   Updated: 2025/03/10 17:10:45 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>

class Array {
	private:
		T *_elem;
	public:
		Array();
		Array(const Array &other);
		const Array &operator=(const Array &other);
		~Array();

		Array(const unsigned int n);
};

# include "Array.tpp"

#endif
