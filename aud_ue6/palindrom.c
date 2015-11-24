#include <stdio.h>

int palindrom1(char feld[], int l) {
  int i;
  int korrekt = 1;
  i = 0;
  l = l - 1;
  while(i < l && korrekt) {
    korrekt = (feld[i] == feld[l]);
    i = i + 1;
    l = l - 1; // --l;
  }
  return korrekt;
}

int main() {
  char test[32] = "lagerregal";
  if(palindrom1(test, 10)) {
    printf("Yay.\n");
  }
  return 0;
}