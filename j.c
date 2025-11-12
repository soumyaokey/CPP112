#include <stdio.h>

int x=89;

int pro(){
    printf("pro()");

    return x;
}

int main(){
    int y =pro();
    printf("\n%d",y);
    y=900;

    printf("\n%d",x);
    return 0;
}