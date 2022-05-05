#include "Span.hpp"

Span::Span(): N(0) {}

Span::Span(const Span &other)
{
	*this = other;
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->N = other.N;
		this->elements = other.elements;
	}
	return (*this);
}

Span::~Span() {}
//
Span::Span(unsigned int n): N(n) {}

void Span::addNumber(int Element)
{
	if (this->elements.size() >= this->N)
		throw ErrorAdd();
	this->elements.push_back(Element);
}

int Span::shortestSpan() const
{
	if (this->elements.size() <= 1)
		throw ErrorShortLong();
	std::vector<int> temp(this->elements);
	sort(temp.begin(), temp.end());
	int diff = abs(temp[0] - temp[1]);
	for (unsigned long i = 1; i < temp.size() - 1; i++)
	{
		if (diff > abs(temp[i] - temp[i + 1]))
			diff = abs(temp[i] - temp[i + 1]);
	}
	return (diff);
}

int Span::longestSpan() const
{
	if (this->elements.size() <= 1)
		throw ErrorShortLong();
	std::vector<int> temp(this->elements);
	sort(temp.begin(), temp.end());
	return *(temp.end() - 1) - *(temp.begin());
}
