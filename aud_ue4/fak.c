#include <stdio.h>

int main() {
  int n, result = 1;
  
  printf("Fakultätsfunktion von... ");
  scanf("%d", &n);
  
  /* Statt irgendwie bis n raufzuzählen, zähle ich einfach von n runter! */
  for (; n > 0; --n) // die leere Anweisung am Anfang ist völlig valide :)
    result *= n; //äquivalent zu result = result * n;
  
  printf("... ist gleich %d\n", result);
  
  return 0;
}
