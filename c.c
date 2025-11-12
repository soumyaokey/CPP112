#include <stdio.h>

int main(){

    int x[]={10,20,30,40,50};

    int*p =&x[0];
    int*q =&x[4];

    printf("%d-%d",*p,p);
    printf("\n%d-%d",*q,q)

    printf("\n%d",q+ *p);
    printf("\n%d",q- *p);
    printf("\n%d",q* *p);
    printf("\n%d",q/ *p);
    return 0;
}