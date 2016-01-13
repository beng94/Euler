#include <list>
#include <iostream>

#define NUMBER 600851475143

long biggest_div = 1;
std::list<long> primes;

bool is_prime (long num)
{
    for (auto n: primes)
    {
        if (num % n == 0) return false;
    }

    return true;
}

long get_next_prime ()
{
    int n = biggest_div + 1;
    while(!is_prime(n)) n++;

    primes.push_back(n);

    return n;
}

long compute ()
{
    long num = NUMBER;
    while (num != 1)
    {
        long prime = get_next_prime();
        if (num % prime == 0)
        {
            biggest_div = prime;
            num /= prime;
        }
    }
}

int main()
{
    compute();
    std::cout << biggest_div << std::endl;

    return 0;
}
