/* Showing the pitfall in using strcpy (and how to print strings)*/
#include <stdio.h>
#include <string.h>

int main() {
  char str[6]; /* This string can hold 5 characters (and a '\0') */
  strncpy(str, "Hello", sizeof(str) - 1);
  printf("%s\n", str); /* Print a string variable with %s */
  strncpy(str, "Goodbye my friend!", sizeof(str) -1);
  printf("%s\n", str);
}
