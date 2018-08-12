/* Function without memory leak */
#include <stdlib.h>
#include <stdio.h>

void f()
{
    int *ptr = (int *)malloc(sizeof(int));

    /* Do some work */
    int var = 3000;
    ptr = &var;
    printf("result: %d", *ptr);

    free(ptr); // this will prevent memory leak
    return;
}

int main()
{
    f();
    return 0;
}
