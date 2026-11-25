#include <stdio.h>

int	main(void){
    int number;
    int n;
    int somme;

    number = 1000;
    n = 0;
    somme = 0;

    while(n<=number){
        somme = somme + n;
        n = n+1;
    }
    printf("%d\n", somme);
}