#include "Span.hpp"

Span::Span() : size(1)
{
	std::srand(std::time(NULL));
}

Span::Span(unsigned int N) : size(N)
{
	std::srand(std::time(NULL));
}

Span::Span(const Span &src)
{
	std::srand(std::time(NULL));
	*this = src;
}

Span &Span::operator=(const Span &src)
{
	std::srand(std::time(NULL));
	if (this != &src)
	{
		this->size = src.size;
		this->v = src.v;
	}
	return *this;
}

Span::~Span()
{}

void Span::addNumber(int n)
{
	try
	{
		if (this->v.size() < this->size)
			this->v.push_back(n);
		else
			throw(Span::fullArray());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	Span::addNumber(std::vector<int>::iterator start, int size)
{
	u_int32_t	new_size = start - this->v.begin() + size;
	if (new_size > this->size)
		throw (Span::fullArray());
	for (int i = 0; i < size; i++)
		this->v.push_back(Span::generateRandom());
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
		std::sort(this->v.begin(), this->v.end());
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

int	Span::generateRandom()
{
	int	value;

	value = ((std::rand() * std::rand()) % ((std::rand() % 1000) + 1));
	if ((((std::rand() % 100) * (std::rand() % 10)) % 2) == 0)
		value *= -1;
	return (value);
}

void Span::display()
{
	std::cout << "{";
	for (std::vector<int>::iterator i = this->v.begin(); i < this->v.end(); i++)
		std::cout << " " << *i << " ";
	std::cout << "}" << std::endl;
}

std::vector<int>::iterator	Span::getBegin()
{
	return (this->v.begin());
}

const char *Span::fullArray::what() const throw()
{
	return "The array is already full !";
}

const char *Span::tooFewNumber::what() const throw()
{
	return "There is too few elements in the array !";
}