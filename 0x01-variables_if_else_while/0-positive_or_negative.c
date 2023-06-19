#include <stdlib.h>                                   
#include <stdio.h>
#include <time.h>
/**                                                                      
 * main - This programme assigns a random number to the variable          
 */

int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n > 0)
    {
      printf("%d is %s\n", n, " positive");
        }
  else if (n < 0);
    {
      printf("%d is %s\n", n, "negative");
        }
  else
    {
      printf("%d is %s\n", n, "zero");
        }
  return (0);
r:
