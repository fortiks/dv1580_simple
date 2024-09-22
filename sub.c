#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  

  if (argc < 3)
  {
    printf("You have passed to few arguments");
  }
  else if (argc > 3)
  {
    printf("You have passed to many arguments");
  }
  else
  {
    int sum = atoi(argv[1]) - atoi(argv[2]);
    printf("%d\n ", sum);
  }
}
