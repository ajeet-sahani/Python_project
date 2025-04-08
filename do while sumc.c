#include<stdio.h>

int main()
{ int n;
printf("Enter the number=");
scanf("%d",&n);
int i=22;
int sum=0;
     do {
    printf("%d\n",i);
    i++;
    sum=sum+i;
    } while (i<=n);
    printf("sum is %d\n",sum);
    return 0;
}