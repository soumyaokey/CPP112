#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char name[10]
    int age;
    float marks;
};
int main(){

    struct student*p =(struct student*) malloc (sizeof (struct student));

    print ("name:%s,age:%d,marka:%.2f\n",p->name, p->age, p->marks);

    strcpy(p-> name,"gopala");
    p->age =19;
    p->marks=99.45f;

    print("name: %s, age:%d and marks:%.2f\n",p->name,p->age,p->marks);

    free(p);

    return 0;
}