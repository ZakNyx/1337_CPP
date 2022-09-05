
#include "iter.hpp"
template <typename T>
void print(T const item)
{
	std::cout << item << std::endl;
}


int main()
{
	int intA[] = {1, 3, 3, 7, 4, 2, 133742};
	char charA[] = {'1', '3', '3', '7', 'B', 'G'};
	std::string strA[] = {"my", "world"};

	iter(intA, 7, &print);
	iter(charA, 6, &print);
	iter(strA, 2, &print);
}