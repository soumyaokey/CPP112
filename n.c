#include<stdio.h>
#include<stdlib.h>

int main(){

    int *q=
    (int*) malloc(sizeof(int));

    printf("%d",*q);

    *q=579;
    printf("\n%d",*q);

    free(q);

    return 0;
}