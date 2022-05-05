#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack &other) : std::stack<T>(other) {}
		virtual ~MutantStack() {}
		MutantStack &operator=(const MutantStack &other)
		{
			std::stack<T>::operator=(other);
			return (*this);
		}
};

#endif
