#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <cstdlib>

class Span
{
	public:
		typedef std::vector<int>::iterator iterator;
		unsigned int N;
		std::vector<int> elements;
	public:
		Span();
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();
		//
		Span(unsigned int n);
		void addNumber(int Element);
		template <class iter>
		void addNumber(iter begin, iter end);
		int shortestSpan() const;
		int longestSpan() const;
	class ErrorAdd : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return "Can not add element";
			}
	};
	class ErrorShortLong : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return "Error: there is one element !";
			}
	};
};

template <class iter>
void Span::addNumber(iter begin, iter end)
{
	for (iter it = begin; it != end; it++)
		this->addNumber(*it);
}

#endif
