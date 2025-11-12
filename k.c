#include<stdio.h>

void pro(int y[]){
    printf("\npro():%d\n",sizeof(y));
    y[1] =99
}
int main(){
    int i,x[]={12,45,67};

    for (i=0;i<3;i++)
    print ("%d",x[i]);

    pro(x);
    printf("\n-----------\n");

    for (i=0;i<3;i++)
    printf("%d",x[i]);

    return 0;
}