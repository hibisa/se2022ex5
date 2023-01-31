#include <stdio.h>

int main(void) {
  int len = 0;
  char str[] = "hello";
  len = strlen(str);
  printf("%s %d", str, len);
  return 0;
}