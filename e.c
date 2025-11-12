#include <stdio.h>

struct student {
    char name [20]
    int age;
    float marks;
};

int main(){
    struct student x[]={
        {"om",21,82.45f},
        {"ram",12,76.98f},
        {"raju",5,99.99f}
    };

    struct student *p=x
    int i;

    for (i=0;i<3;i++)
    
    printf("^^ name:%s ,age:%d and marks:%2.f\n\n",p[i].name, p[i].age,p[i].marks);

    return 0;
}
