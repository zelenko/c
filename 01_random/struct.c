#include <stdio.h>

typedef struct
{
    char *brand;
    int model;
} vehicle;

int main()
{
    vehicle mycar;
    mycar.brand = "Ford";
    mycar.model = 2007;

    printf("model: %d", mycar.model);

    return 0;
}