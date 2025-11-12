#include<stdio.h>

void pro (int a){
    print ("pro()%d",a);
    a=56;
}
int main (){
    int a=23;

    pro(a);
    printf("\nmain()%d",a);

    return 0;
}