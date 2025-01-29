#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	std::vector<int>::iterator idx;

	idx = ::easyfind(vec, 4);
	std::cout << std::endl;

	idx = ::easyfind(vec, 10);
	std::cout << std::endl;

	vec.push_back(10);
	idx = ::easyfind(vec, 10);
}