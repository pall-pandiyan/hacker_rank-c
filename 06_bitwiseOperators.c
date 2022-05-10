#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
    int tempAnd,tempOr,tempXor;
    tempAnd=tempOr=tempXor=0;    
    
    for (int i = 1; i < n+1; i++) {
        for (int j=i+1; j < n+1; j++) {
 
            if( tempAnd < (i&j) && k > (i&j) ) {
                tempAnd=(i&j);
            }
            
            if( tempOr < (i|j) && k > (i|j) ) {
                tempOr=(i|j);
            }
            
            if( tempXor < (i^j) && k > (i^j) ) {
                tempXor=(i^j);
            }
            
        }
    }
    
    printf("%d\n%d\n%d",tempAnd,tempOr,tempXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
