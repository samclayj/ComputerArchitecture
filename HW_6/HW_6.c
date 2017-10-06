#include <stdio.h>
#include <string.h>

int main (void) {
  char s1[17];
  char s2[] = "This is a string";
  
  memcpy(s1,s2,17);
  printf("%s\n%s\n", s1, s2);  
}