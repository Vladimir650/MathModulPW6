#include "library.hpp"

int pow(int num, int degree)
{
    int result = 1;

    for (int i = 0; i < degree; i++)
    {
       result = result * num;
    }
    
    return result;
}

int absolute(int num)
{
    int result;

    if (num < 0)
    {
        result = -num;
    }
    else
    {
        result = num;
    }

    return result;
}

int factorial(int num)
{
    int result = 1;
    for (int i = 2; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}