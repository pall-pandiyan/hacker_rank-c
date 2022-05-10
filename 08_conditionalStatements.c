#include <stdio.h>

int main () {

    int num;
    char eng[10][10] = {
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
    
    scanf("%d",&num);
    
    if (num>0 && num<10) {
        printf("%s",eng[num-1]);
    }
    else {
        printf("Greater than 9");
    }
    return 0;
}
