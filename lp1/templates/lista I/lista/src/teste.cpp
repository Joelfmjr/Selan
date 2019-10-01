#include <iostream>
#include <vector>
#include "graal.h"

int main()
{
	std::vector<int> v;
	for (size_t i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	auto first = std::begin(v);
	auto last = std::end(v);

	for (size_t i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << " ";
	}
	std::cout << '\n';
	graal::reverse(first, last);

	for (size_t i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << " ";
	}

	return 0;
}
