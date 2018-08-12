#include <stdio.h>
#include <inttypes.h>

unsigned fib(unsigned n)
{
    if (!n)
        return 0;
    else if (n <= 2)
        return 1;
    else
    {
        unsigned a, c;
        for (a = c = 1;; --n)
        {
            c += a;
            if (n <= 3)
                return c;
            a = c - a;
        }
    }
}

int main()
{
    printf("%ju", fib(5));
    return 0;
}
