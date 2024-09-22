#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]){

  if (argc < 3)
  {
    printf("You have passed to few arguments");
  }
  else if (argc > 3)
  {
    printf("You have passed to many arguments");
  }
  else {
    char* num1 = argv[1];
    char* num2 = argv[2];
    int floatAccepted = 0;
    int isChar = 0;
    int vaildArguments = 0;
    for (int i = 0; i < strlen((num1)); i++ )
    {
      if ( !( (num1[i] >= '0') && (num1[i] <= '9')))
      {
        if(num1[i] == '.')
        {
          floatAccepted++;
        }
        else
        {
          isChar++;
        }
      }
    }


    if(isChar || floatAccepted>1) {
      printf("Argument 1 is not a valid number\n");
      
    }
    else {
      vaildArguments++;
    }

    floatAccepted = 0;
    isChar = 0;

    for (int i = 0; i < strlen(num2); i++)
    {
      if ((!((num2[i] >= '0') && (num2[i] <= '9'))))
      {
        if (num2[i] == '.')
        {
          floatAccepted++;
        }
        else
        {
          isChar++;
        }
      }
    }
    if (isChar || floatAccepted > 1)
    {
      printf("Argument 2 is not a valid number\n");
      
    }
    else {
      vaildArguments++;
    }

    if (vaildArguments == 2)
    {
      float float1 =  atof(argv[1]) ;
      float float2 = atof(argv[2]);
      float sum = float1 * float2;
          printf(" The sum of %.4f * %.4f is %.4f\n", float1, float2, sum);
    }
  }
  return 0;
}

  
