/* Richard Townsend   7-21-17

   Introducing random number generation in C
*/

/* stdlib contains definitions dealing with randomness
   (among other things) */
#include <stdlib.h> 
#include <stdio.h>

int main() {
  /* Show the range of numbers generated by rand() */
  printf("\nThe rand function generates a value between 0 and %d\n\n", RAND_MAX);
  int rand_num;
  /* Generate 10 pseudorandom numbers from initial seed of 1 */
  for (int i = 0; i < 10; ++i) {
    rand_num = rand();
    printf("%d\n", rand_num);
  }
}
