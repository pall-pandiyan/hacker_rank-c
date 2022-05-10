#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d",&a);
	scanf("%d",&b);
    
    float x,y;
    scanf("%f",&x);
    scanf("%f",&y);
    
    printf("%d ",a+b);
    printf("%d\n",a-b);
    
    printf("%0.1f ",x+y);
    printf("%0.1f\n",x-y);
    
    return 0;
}