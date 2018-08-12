#include <stdio.h>

#define WIDTH 5
#define HEIGHT 3

int jimmy[HEIGHT][WIDTH];
int n, m;

int main()
{
  for (n = 0; n < HEIGHT; n++)
  {
    for (m = 0; m < WIDTH; m++)
    {
      jimmy[n][m] = (n + 1) * (m + 1);
      printf("%d ", jimmy[n][m]);
    }
    printf(" \n");
  }
}

// multidimentional array