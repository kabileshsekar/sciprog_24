#include<stdio.h>
#include<stdlib.h>
void fib(int *n1, int *n2)
{
   int n = *n1 + *n2;
   *n2 = *n1;
   *n1 = n;
}
int main()
{
    int n, n1=0, n2=1;
    printf("Enter a value for n:");
    scanf("%d",&n);
    if(n<1)
    {
        printf("n should be greater than 1");
        exit(1);
    }
    printf("The fibonacci series is:%d ",n1);
    for(int i = 0;i<n-1;i++)
    {
        fib(&n1,&n2);
        printf("%d ",n1);

    }
}