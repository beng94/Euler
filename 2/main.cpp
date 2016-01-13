#include <iostream>

#define LIMIT 4000000

int compute ()
{
    int sum = 0;
    int a = 0;
    int b = 1;
    while (b < LIMIT)
    {
        std::cout << b << std::endl;
        if (b % 2 == 0) sum += b;

        int tmp = a;
        a = b;
        b += tmp;
    }

    return sum;
}

int main ()
{
    std::cout << "Answer: " << compute() << std::endl;
}
