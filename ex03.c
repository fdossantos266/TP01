#include <stdio.h>

int n;
int main(void) {
    n = 42;
    while(n<=1337){
        if(n%2==0){
            printf("%d \n",n);
        }
        n = n+1;
    }
}