#include "MutantStack.hpp"
#include <vector>
#include <list>

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << std::endl;
		std::cout << mstack.top() << std::endl;
		std::cout << std::endl;
		mstack.pop();
		std::cout << std::endl;
		std::cout << mstack.size() << std::endl;
		std::cout << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	std::cout << std::endl;
	{
		std::vector<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << std::endl;
		std::cout << mstack.back() << std::endl;
		std::cout << std::endl;
		mstack.pop_back();
		std::cout << std::endl;
		std::cout << mstack.size() << std::endl;
		std::cout << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::vector<int>::iterator it = mstack.begin();
		std::vector<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	std::cout << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << std::endl;
		std::cout << mstack.top() << std::endl;
		std::cout << std::endl;
		mstack.pop();
		std::cout << std::endl;
		std::cout << mstack.size() << std::endl;
		std::cout << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::reverse_iterator it = mstack.rbegin();
		MutantStack<int>::reverse_iterator ite = mstack.rend();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl;
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << std::endl;
		std::cout << mstack.back() << std::endl;
		std::cout << std::endl;
		mstack.pop_back();
		std::cout << std::endl;
		std::cout << mstack.size() << std::endl;
		std::cout << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::reverse_iterator it = mstack.rbegin();
		std::list<int>::reverse_iterator ite = mstack.rend();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		return 0;
	}
}