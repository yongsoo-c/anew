#include <stdio.h>
#include "libcheckprime.h"

void main() {
  while (1)
  {
    int num;
    printf("\ninput integer => ");
    scanf("%d" , &num);
    if (num == 0) break;
    if (checkprime(num) == num)
    printf("%d is a prime number \n", num);
    else
    printf("%d is not prime number \n", num);
  }
}
