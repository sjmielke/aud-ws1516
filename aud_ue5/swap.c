#include <stdio.h>

void swap_unwirksam(int x, int y) {
  if (x % 2 == 1) y++;

  /* Dreieckstausch */
  int tmp;
  tmp = x;
  x = y;
  y = tmp;
}

void swap_wirksam(int* x, int* y) {
  if (*x % 2 == 1) (*y)++;

  /* Dreieckstausch, diesmal richtig! */
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}

void swap_nerdig(int* x, int* y) {
  if (*x % 2 == 1) (*y)++;

  *x = *x - *y;
  *y = *x + *y;
  *x = *y - *x;
}

int main() {
  int a = 3, b = 5;

  swap_wirksam(&a, &b);
  printf("%d %d", a, b);
  
  return 0;
}
