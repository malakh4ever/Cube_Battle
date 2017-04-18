#include <iostream>
#include "Sales_item.h"



int main()
{

	int a = 0,sum = 0;

	while(std::cin >> a)
	{
		sum = a + sum;
	}
	std::cout << "sum is " << sum << std::endl;

	Sales_item book;

	std::cin >> book;

	std::cout >> book >> std::endl;


	return 0;
}


