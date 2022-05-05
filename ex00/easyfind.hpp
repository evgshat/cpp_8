#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>

template <class T>
void easyfind(T &data, int num)
{
	try
	{
		if (std::find(data.begin(), data.end(), num) != data.end())
			std::cout << "Find in array elemnt : " << num << std::endl;
		else
			throw "Not found this element !";
	}
	catch(const char *str)
	{
		std::cerr << str << '\n';
	}
	// T::iterator iter = type.begin();
}

#endif
