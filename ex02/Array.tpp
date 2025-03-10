/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:03:29 by nponchon          #+#    #+#             */
/*   Updated: 2025/03/10 17:31:09 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() {}

template <typename T>
Array<T>::Array(const Array &other) {
	*this = other;
}

template <typename T>
const Array<T> &Array<T>::operator=(const Array<T> &other) {
	if (this != &other) {
		_elem = new *<T>;
	}
	return *this;
}

template <typename T>
Array<T>::~Array() {}

template <typename T>
Array<T>::Array(const unsigned int n) {
	_elem = new T[n];
}
