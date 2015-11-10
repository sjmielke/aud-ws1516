#include <stdio.h>

#define LEN 1001

int main() {
  /*
   *     2  3 --  5 --  7 -- -- --
   * 11 -- 13 -- -- -- 17 -- 19 --
   * -- -- 23 -- -- -- -- -- 29 --
   * ...
   */
  
  int sieve[LEN];
  int i, j;
  
  for(i = 2; i < LEN; ++i)
    sieve[i] = 1;
  
  for(i = 2; i < LEN; ++i) {
    if(sieve[i] != 0) {
      for(j = 2 * i; j < LEN; j = j + i) {
        sieve[j] = 0;
      }
    }
  }
  
  for(i = 2; i < LEN; ++i)
    if(sieve[i] != 0)
      printf("%d ", i);
  
  return 0;
}
