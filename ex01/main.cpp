#include "Span.hpp"

int main()
{
	//
	std::vector<int> v(5);
	std::cout << v.size() << std::endl;
	std::cout << v.capacity() << std::endl;
	v.push_back(9);
	for (int i = 0; i < 5; ++i)
		std::cout << v[i] << std::endl;
	std::cout << v[5] << std::endl;
	std::cout << v.capacity() << std::endl;
	v.push_back(9);
	std::cout << v.capacity() << std::endl;
	//
	Span a(5);
	a.addNumber(-1);
	// std::cout << a.elements[0] << std::endl;
	a.addNumber(5);
	// std::cout << a.elements[1] << std::endl;
	a.addNumber(-7);
	a.addNumber(100);
	a.addNumber(2);
	int res;
	res = a.shortestSpan();
	for (int i = 0; i < 5; i++)
		std::cout << a.elements[i] << std::endl;
	std::cout << res << std::endl;
	//
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	Span b(4);
	b.addNumber(v.begin(), v.end());
	for (int i = 0; i < 4; i++)
		std::cout << b.elements[i] << std::endl;
}
