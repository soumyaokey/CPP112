#include<stdio.h>
#include<stdlib.h>

int main(){

    int *q= (int*)calloc(4,sizeof (int));

    printf("\n-%d-%d-%d-%d",*(q+0),*(q+1)*(q+2),*(q+3));

    *(q+0) = 52;
    *(q+1) = 73;
    *(q+2) = 98;
    *(q+3) = 32;

     printf("\n-%d-%d-%d-%d",*(q+0),*(q+1)*(q+2),*(q+3));

     free(q);

     return0;

}

    