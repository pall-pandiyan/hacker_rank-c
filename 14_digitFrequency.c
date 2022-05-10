#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int ch;
    int result[] = {0,0,0,0,0,0,0,0,0,0};
    int SIZE = 10;
    
    while ((ch = getchar())!='\n' && ch != EOF) {
        if(ch >= 48 && ch <= 57) {
            result[ch-48] += 1;
        }    
    }
    
    for(int i=0; i<SIZE; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}
