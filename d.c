#include <stdio.h>

int main(){

    int x[]={10,20,30,40,50};
    int *p=&x [4],i;

    //for (i=0;i<5;i++)
    //printf ("%d",*(p-i));

     for (i=0;i<5;i--)
    printf ("%d", p[i]);

    return 0;
}

