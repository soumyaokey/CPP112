#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char name[10]
    int age;
    float marks;
};
int main(){

    int n,i;

    printf("how many records:");
    scanf("%d",&n);

    struct student *p=(struct studet*) calloc(n,sizeof (struct student));

    for(i=0;i<n;i++)
    printf ("name:%s,age:%d,marka:%.2f\n",(p+i)->name,(p+i)->age,(p+i) ->marks);

    printf("\n\n+++++++++++++++++++++++++++++++++\n\n");

    for(i=0;i<n;i++){
        fflush(stdin);
        printf("enter name:");
        scanf ("[A-Za-z]",(p+i)->name)

         printf("enter age:");
        scanf ("%d",(p+i)->age)

         printf("enter marks:");
        scanf ("%f",(p+i)->marks)

    }
    
    printf("\n\n+++++++++++++++++++++++++++++++++\n\n");

    for(i=0;i<n;i++)
    printf ("name:%s,age:%d,marka:%.2f\n",(p+i)->name,(p+i)->age,(p+i) ->marks);

    free(p);

return 0;

    }