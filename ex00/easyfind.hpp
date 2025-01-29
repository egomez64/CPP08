#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template <typename T>
typename T::iterator easyfind(T &tab, int to_find);

#include "easyfind.tpp"

#endif