#include<stdio.h>

int main()
{ int age;

    printf("Enter the age=");
    scanf("%d",&age);
    if (age>18 ) 
  {  printf("Adult\n");
    printf("They can vote\n");
    printf("They can drive\n");
    printf("They can job\n");
    printf("They can get married\n");
    }
  
    else
  {  printf("Not adult\n");
    printf("The can not vote\n");
    printf("The can not drive\n");
    printf("The can not job\n");
    printf("The can not get married\n");
    }
    return 0;
}