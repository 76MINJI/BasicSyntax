#include "Nums.h"
#include <iostream>

Nums::Nums()
{
	std::cout << "start_num �Է�: ";
	std::cin >> Sn;
	std::cout << "end_num �Է�: ";
	std::cin >> En;
}
Nums::~Nums()
{

}

void Nums::PrintNums()
{
	for (int i = Sn; i <= En; i++)
	{
		std::cout << i << std::endl;
	}
}
