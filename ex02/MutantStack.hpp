#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iterator>
#include <iostream>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;
		typedef typename std::deque<T>::reverse_iterator reverse_iterator;
		typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;
	
	public:
		MutantStack(): std::stack<T>(){}
		MutantStack(const MutantStack &src): std::stack<T>(src){}
		MutantStack &operator=(const MutantStack &src)
		{
			if (this != src)
				this.c = src.c;
			return *this;
		}
		~MutantStack(){}
	
	public:
		iterator end()
		{
			return std::stack<T>::c.end();
		}
		const_iterator cend() const
		{
			return std::stack<T>::c.end();
		}
		reverse_iterator rend()
		{
			return std::stack<T>::c.rend();
		}
		const_reverse_iterator crend() const
		{
			return std::stack<T>::c.rend();
		}
		iterator begin()
		{
			return std::stack<T>::c.begin();
		}
		const_iterator cbegin() const
		{
			return std::stack<T>::c.begin();
		}
		reverse_iterator rbegin()
		{
			return std::stack<T>::c.rbegin();
		}
		const_reverse_iterator crbegin() const
		{
			return std::stack<T>::c.rbegin();
		}	
};

#endif