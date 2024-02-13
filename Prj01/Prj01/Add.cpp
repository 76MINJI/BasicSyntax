#include "Add.h"
#include <iostream>

Add::Add()
{
    std::cout << "양의 정수 입력: ";
    std::cin >> n;
}
Add::~Add()
{

}

void Add::Dicision()
{
    int answer = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % 2 != 0)
        {
            if (i % 2 != 0)
            {
                answer += i;
            }
        }
        else
        {
            if (i % 2 == 0)
            {
                answer += i;
            }
        }
    }
    std::cout << answer << std::endl;
}


