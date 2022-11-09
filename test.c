#include <stdio.h>
#include <math.h>
#include <string.h> 
#include <stdlib.h>
#define LEFT 0
#define RIGHT 1
void rotateArray(int shift, int b[], int d);
int main(int argc, char const *argv[])
{
  int a[6] = {1, 2, 3, 4, 5, 6};
  rotateArray(4, a, LEFT);
  return 0;
}
void rotateArray(int shift, int b[], int d)
{
  int temp;
  if (d == RIGHT)
  {
    while (shift)
    {
      temp = b[5];
      for (int i = 5; i >= 1; i--)
        b[i] = b[i - 1];
      b[0] = temp;
      shift--;
    }
  }
  else if (d == LEFT)
  {
    while (shift)
    {
      temp = b[0];
      for (int i = 1; i <= 5; i++)
        b[i - 1] = b[i];
      b[5] = temp;
      shift--;
    }
  }
  for (int i = 0; i <= 5; i++)
    printf("%d ", b[i]);
  
}