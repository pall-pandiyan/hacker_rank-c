#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    char eng[9][10] = {
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"
    };
    scanf("%d\n%d", &a, &b);
  	// Complete the code.

    for (int i=a; i<=b; i++) {
      if(i<10) {
          printf("%s",eng[i-1]);
      }
      else {
          if(i%2 == 0) {
              printf("even");
          }
          else {
              printf("odd");
          }
      }
      printf("\n");
    }
    return 0;
}

