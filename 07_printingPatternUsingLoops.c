#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int maxLen=n+(n-1),min=0;
    
    for ( int i=0; i<maxLen; i++) {
        for (int j=0; j<maxLen; j++) {
            min = i < j ? i : j;
            min = min < maxLen-i ? min : maxLen-(i+1);
            min = min < maxLen-j ? min : maxLen-(j+1);
            printf("%d ", n-min);
        }
        printf("\n");
    }
    
    return 0;
}
