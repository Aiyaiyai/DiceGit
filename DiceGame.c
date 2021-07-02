#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i, random, total = 0;
  char name[30];

  printf("What is your name? \n>");
  scanf("%s", name);
  printf("Hello, %s!\n", name);

  srand(time(NULL));

  printf("Rolling the dice...\n");
  for(i = 1; i <= 2; i++){
    random = rand() % 6 + 1;
    total += random;

    printf("Die %d: %d\n", i, random);
  }
  printf("Total value: %d\n", total);

  if(total >= 7)
    printf("%s won.\n", name);
  else
    printf("%s lost.\n", name);

  return 0;
}
