#include <stdio.h>

int main() {
  
  /*
   *      1 2 3
   * 
   *   1  1 2 3
   *   2  2 4 6
   *   3  3 6 9
   */
  
  int zeile, spalte, n;
  
  printf("Bitte eine Zahl eingeben: ");
  scanf("%d", &n);
  
  for (zeile = 1; zeile <= n; ++zeile) {
    for (spalte = 1; spalte <= n; ++spalte) {
      printf("%2d ", spalte * zeile);
    }
    printf("\n");
  }
    
  return 0;
}
