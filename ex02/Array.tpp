/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:03:29 by nponchon          #+#    #+#             */
/*   Updated: 2025/03/12 14:01:10 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _elem(new T[0]), _size(0) {}

template <typename T>
Array<T>::Array(const Array &other) {
	*this = other;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &other) {
	if (this != &other) {
		//delete _elem;
		_size = other._size;
		_elem = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_elem[i] = other._elem[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](const unsigned int i) {
	if (i >= _size) {
		throw OutOfBoundsException();
	}
	return _elem[i];
}

template <typename T>
Array<T>::~Array() {
	delete [] _elem;
}

template <typename T>
Array<T>::Array(const unsigned int n) {
	_elem = new T[n];
	_size = n;
}

template <typename T>
const char* Array<T>::OutOfBoundsException::what() const throw() {
	return "index is out of bounds";
}
