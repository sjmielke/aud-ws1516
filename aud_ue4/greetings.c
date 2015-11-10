#include <stdio.h>

int main() {
  
  /* String: "Hallo"
   * Character: 'H'
   * String: {'H', 'a', 'l', ...}
   */
  
  char name[50];
  
  printf("Hallo! Was ist dein Name?\n");
  scanf("%49s", name);
  printf("Aha, du bist also %s.\n", name);
  
  return 0;
}
