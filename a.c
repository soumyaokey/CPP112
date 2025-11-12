#include <stdio.h>

int main(){

    int x= 34;

    int *p= &x;

    printf("x:%d",x);
    printf("\n&x:%d",&x);
     printf("\np:%d",p);
     printf("\n&p:%d",&p)
     ptintf("\nvalue at p(*p):%d",*p);

     return 0;

}