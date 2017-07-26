#include <stdio.h>

void print_arr(int [], int);
//void map_add(int, int [], int);

int main() {
  const int SIZE = 20;
  int numbers[SIZE]; /* An array of SIZE integers */
  int to_find; /* Number to find in the array */
  /* Populate the array with SIZE random integers */
  for (int i = 0; i < SIZE; i++) {
    numbers[i] = i;
  }
  printf("Before calling the funcion: \n");
  print_arr(numbers, SIZE);
  /*
  map_add(10,numbers,SIZE);
  printf("\nAfter calling the function: \n");
  print_arr(numbers, SIZE);
  */
}

/* Print an array of a given size */
void print_arr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%2d ", arr[i]);
  }
  printf("\n");
}

/*void map_add(int to_add,  int arr[], int size)  {
  for (int i = 0; i < size; i++) {
    arr[i] += to_add;
  }
  return;
}
*/
