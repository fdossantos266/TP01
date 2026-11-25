#include <stdio.h>
#include <unistd.h>


int number;
int a;
int main(void) {
    number = 3;
    
    while(a<=number){
        write(1, "\nje suis un robot", 17);
        a = a + 1;
    }
    return 0;
}