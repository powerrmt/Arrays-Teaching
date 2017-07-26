/* Richard Townsend   7-16-17

   This program performs a "random" walk around an array,
   counting the number of times each element is accessed.
   Here's how it works:

   1. Create an integer array, and position the "walker" at the center.
   2. Flip a coin; if heads (0) move 1 spot right, if tails (1) move 1
      spot left.
   3. Print the array position with '*' to visualize the random walk.
   3. Increment the element where you end up in the array.
   4. Repeat steps 2-4 n times
   5. Print out the total # of times each cell was occupied
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Size of random array */
#define ARR_SIZE 10

int coin_flip(int rand_num) {
  return rand_num % 2;
}

/* Print out the current position of the walker */
void print_arr(int positions[], int walker) {
  int i;
  for (i = 0; i < walker; ++i)
    printf(" ");
  printf("*");
  for (i = walker; i < ARR_SIZE; ++i)
    printf(" ");
  printf("\n");
}

int main() {
  /* Number of "steps" taken by walker */
  const int iterations = 10;
  /* Seed the random number generator */
  srand(time(NULL));
  /* Initialize the array to all 0s */
  int positions[ARR_SIZE] = {0};
  /* Locate the walker in the middle of the array */
  int walker = ARR_SIZE / 2;
  positions[walker]++;
  print_arr(positions, walker);
  for (int i = 0; i < iterations; ++i) {
    if (coin_flip(rand()) == 0) {
      /* Move right (wrap around if needed)*/
      walker = (walker + 1) % ARR_SIZE;
      positions[walker]++;
    } else {
      /* Move left (wrap around if needed) */
      --walker;
      if (walker < 0)
        walker = ARR_SIZE - 1;
      positions[walker]++;
    }
    print_arr(positions, walker);
  }
  /* Print counts of visitations */
  printf("\nAt the end of the walk, here was our visitation history:\n [");
  for (int i = 0; i < ARR_SIZE - 1; ++i) {
    printf("%d,", positions[i]);
  }
  printf("%d]\n", positions[ARR_SIZE - 1]);

}
