#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch, s[25], li[50];

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%c",&ch);
    scanf("%s",&s);
    scanf("\n");
    scanf("%[^\n]%*c",&li);
    
    printf("%c",ch);
    printf("\n");
    printf("%s",s);
    printf("\n");
    printf("%s",li);
        return 0;
}
