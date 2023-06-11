#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,sum=0;

    printf("Rolling dice...\n");
    a = rand()%6+1;
    printf("Die 1: %d\n",a);
    b = rand()%6+1;
    printf("Die 2: %d\n",b);
    sum = a+b;

    printf("Total value : %d\n",sum);

}