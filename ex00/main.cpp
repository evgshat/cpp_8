#include "easyfind.hpp"

int main()
{
	// std::vector<int> vec;
	// for (int i = 0; i < 3; i++)
	// vec.push_back(i);

	// for (int i = 0; i < 3; i++)
	// 	std::cout << vec[i] << std::endl;
	std::list<int> arr1;
	for (int i = 0; i < 15; i++)
		arr1.push_back(i);
	::easyfind(arr1, 1);
	::easyfind(arr1, 16);
	//
	std::vector<double> arr2;
	for (int i = 0; i < 15; i++)
		arr2.push_back(i);
	::easyfind(arr2, 1);
	::easyfind(arr2, 16);
	return (0);
}
