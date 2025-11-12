#include <stdio.h>

int main(){
    int y;

    int *q=&y;

    printf("before:%d",y);

    *q=34;

    printf("\n after:%d",y);

    return 0;
}