#include "Span.hpp"

Span::Span() : size(1)
{}

Span::Span(unsigned int N) : size(N)
{}

Span::Span(const Span &src)
{
	*this = src;
}

Span &Span::operator=(const Span &src)
{
	if (this != &src)
		this->size = src.size;
	return *this;
}

Span::~Span()
{}

unsigned int Span::getSize() const
{
	return this->size;
}

void Span::addNumber(int n)
{
	try
	{
		if (this->v.size() < this->getSize())
		{
			this->v.push_back(n);
			std::sort(this->v.begin(), this->v.end());
		}
		else
			throw(Span::fullArray());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int Span::longestSpan()
{
	try
	{
		if (this->v.size() <= 1)
			throw(Span::tooFewNumber());
		return *std::max_element(this->v.begin(), this->v.end()) - *std::min_element(this->v.begin(), this->v.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return -1;
	}
}

int Span::shortestSpan()
{
	try
	{
		if (this->v.size() <= 1)
			throw(Span::tooFewNumber());
		int shortest = this->v.at(1) - this->v.at(0);
		for (std::vector<int>::iterator i = this->v.begin(); i + 1 < this->v.end(); i++)
		{
			if (shortest < 0)
				shortest = *(i + 1) - *i;
			else if (shortest > *(i + 1) - *i && *(i + 1) - *i >= 0)
				shortest = *(i + 1) - *i;
		}
		return shortest;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return -1;
	}
}

const char *Span::fullArray::what() const throw()
{
	return "The array is already full !";
}

const char *Span::tooFewNumber::what() const throw()
{
	return "There is too few elements in the array !";
}