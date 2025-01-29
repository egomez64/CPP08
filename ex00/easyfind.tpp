#include "easyfind.hpp"
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &tab, int to_find)
{
	typename T::iterator search = std::find(tab.begin(), tab.end(), to_find);
	if (search != tab.end())
		std::cout << "found " << to_find << std::endl;
	else
		std::cout << "can't find " << to_find << std::endl;
	return search;
}