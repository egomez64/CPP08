#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span
{
	private:
		std::vector<int> v;
		unsigned int size;
	
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &src);
		Span &operator=(const Span &src);
		~Span();

	public:
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		unsigned int getSize() const;
		void bubbleSort();

	private:
		class fullArray: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class tooFewNumber: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#endif