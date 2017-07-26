/* Richard Townsend   7-14-17

   Examples of how to declare and initialize arrays.
*/

#include <stdio.h>


int main() {
  /* An array declaration specifies the type of its elements, 
     a name to refer to the array, and an integer value in 
     square braces indicating how many elements the array holds.
  */
  int seats[20];
  float fractions[3];
  char alphabet[26];

  /* Initializing an array when its declared involves specifying
     1 or more elements in curly braces. */
  int numbers[3] = {1, 2, 3}; 
  /* Specifying fewer elements than the array size automatically
     sets the rest of the elements to 0 */
  float decimals[3] = {1.2, 0.2};
  /* The number of elements in the braces determines an array's
     size if no value is given in the []. */
  char binary[] = {'0', '1'};
}
