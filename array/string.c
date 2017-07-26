/* Showing off some string functions */

#include <stdio.h>
#include <string.h>

int main() {
  /* Some different ways to initialize a string */
  char str[6] = "Hello";
  char name[8] = {'R', 'i', 'c', 'h', 'a', 'r', 'd', '\0'};
  char zzz[10];
  for (int i = 0; i < 9; i++) {
    zzz[i] = 'z';
  }
  zzz[9] = '\0';

  /* Use %s to print a '\0'-delimited character array */
  printf("%s\n", name);

  /* What do these statements print? */
  printf("%d\n", strcmp("Hello", "Helly"));
  printf("%d\n", strcmp(str,"Hello"));
  printf("%d\n", strcmp(name,str));

  printf("Adding a linen of code");
}
