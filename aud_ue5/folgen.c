#include <stdio.h>

int fib(int n) {
  /*
   *  fib(0) = 1
   *  fib(1) = 1
   *  fib(n) = fib(n-1) + fib(n-2)
   */
  
  if(n == 0 || n == 1)
    return 1;
  else
    return fib(n-1) + fib(n-2);
}

int G(int n) {
  if(n == 0) {
    return 0;
  }
  else {
    return n - G(G(n-1));
  }
}


int M(int);

int F(int n) {
  if(n == 0)
    return 1;
  else
    return n - M(F(n-1));
}

int M(int n) {
  return (n == 0) ? 0 : n - F(M(n-1));
}


int main() {
  int i;
  printf("Fibonacci\n");
  for(i = 0; i < 10; ++i) {
    printf("%3d ", fib(i));
  }
  printf("\n\nFolge G\n");
  for(i = 0; i < 10; ++i) {
    printf("%3d ", G(i));
  }
  
  printf("\n\nFolgen F, M\n");
  for(i = 0; i < 10; ++i) {
    printf("%3d ", F(i));
  }
  printf("\n");
  for(i = 0; i < 10; ++i) {
    printf("%3d ", M(i));
  }
  
  return 0;
}
