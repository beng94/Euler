#include <iostream>

int count (int num, int upper_bound)
{
    return upper_bound / num;
}

int increasing_sum (int last_num)
{
    if (last_num == 1) return 1;
    return ((1 + last_num) / 2.0) * last_num;
}

#define LIMIT 999

int main()
{
    int n_three = count(3, LIMIT);
    int n_five = count(5, LIMIT);
    int n_fifteen = count(15, LIMIT);

    int result = increasing_sum(n_three) * 3 +
                 increasing_sum(n_five) * 5 -
                 increasing_sum(n_fifteen) * 15;

    std::cout << result << std::endl;
}
