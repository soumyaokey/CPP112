#include <stdio.h>

int main(){

    short y[]={34,56,98};
    shoet*q =&y[0];
    printf ("\n%d/n",y,&y[0]);

    printf("y[0]: %d~*(q+0):%d\n",y[0],*(q+0));
    printf("y[1]: %d~*(q+1):%d\n",y[1],*(q+1));
    printf("y[2]: %d~*(q+2):%d\n",y[2],*(q+2));

    return 0;
}