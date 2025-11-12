#include <stdio.h>
int main(){

    int x =20;

    int *p =&x;

    int **q=&p;

    int ***r =&q

    printf("%d-%d-%d-%d",x,*p,**q,***r);

    return 0;

}
