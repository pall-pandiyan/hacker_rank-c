#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int x1=*a;
    int x2=*b;
    
    *a=x1+x2;
    *b=abs(x1-x2);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
