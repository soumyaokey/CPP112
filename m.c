#include <stdio.h>

struct abc{
    int p;
    int *q;

};
int main(){

    struct abc x[2];
    struct abc *a;

    x[0].p=22;
    x[0].q=&x[0].p;

    x[1].p=34;
    x[1].q=&[1].p;

    a=&x[0];

    printf("%d",++(a->p));
    printf("\n%d",a->p);

    return 0;
}
