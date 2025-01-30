#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <ctime>

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
		void addNumber(std::vector<int>::iterator start, int size);
		int shortestSpan();
		int longestSpan();
		std::vector<int>::iterator getBegin();
		void display();

	private:
		static int	generateRandom();

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