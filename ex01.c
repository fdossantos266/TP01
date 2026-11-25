#include <stdio.h>

int number;
int a;
int main(void) {
    a = 0;
    number = 14;

    while(a<=number){
        printf("%d\n",a);
        a = a+1;
    }
    return 0;
}