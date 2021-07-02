#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i, random, total = 0;

  srand(time(NULL));

  printf("Rolling the dice...\n");
  for(i = 1; i <= 2; i++){
    random = rand() % 6 + 1;
    total += random;

    printf("Die %d: %d\n", i, random);
  }
  printf("Total value: %d\n", total);

  return 0;
}
