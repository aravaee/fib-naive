/**
 * @file main.cpp
 * @author Ali Ravaee
 * @brief Find the first few Fibonacci numbers.
 * @version 0.1
 * @date 2021-01-30
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <iostream>
/**
 * @brief This is a recursive function to compute Fibonacci numbers.
 *
 * @param num The number of Fibonacci to calculate.
 * @return int The result of the calculation.
 */
long fib(int num)
{
    if (num <= 1)
        return num;
    return fib(num - 1) + fib(num - 2);
}

int main(int argc, char const *argv[])
{
    for (int i = 0; i <= 10; i++)
    {
        std::cout << i * 5 << ": " << fib(i * 5) << std::endl;
    }
    return 0;
}