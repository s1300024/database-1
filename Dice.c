#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,sum=0;
    char name[10];
    printf("What's your name?\n");
    printf(">");
    scanf("%s",name);
    printf("Hello, %s!\n",name);

    printf("Rolling dice...\n");
    a = rand()%6+1;
    printf("Die 1: %d\n",a);
    b = rand()%6+1;
    printf("Die 2: %d\n",b);
    sum = a+b;
    printf("Total value : %d\n",sum);

    if(sum<=7){
        printf("%s lost!\n",name);
    }
    else{
        printf("%s won!\n",name);
    }

}