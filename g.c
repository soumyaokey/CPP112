#include <stdio.h>

int main(){

    int x[]={340,350,360};
    int (*p)[3]=&x;

    printf("%d-%d-%d,(*p)[0],(*p)[1],(*p[2])")

    return 0;
}