#include<stdio.h>
#include<stdlib.h>
void matmul(int n,int p,int q,double A[n][p], double B[p][q], double C[n][q])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            for(int k=0;k<p;k++)
            {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
}
int main()
{
    int n=5,p=3,q=4;
    double A[n][p], B[p][q], C[n][q];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            A[i][j] =(double) i+j;
            //printf("%d %d %.0lf   ",i, j, A[i][j]);
        }
        //printf("\n\n");
    }
     for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            B[i][j] = i-j;
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            C[i][j] = 0;
        }
    }
   matmul(n,p,q,A,B,C);
   printf("A\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            printf("%.0lf ",A[i][j]);
        }
        printf("\n");
    }
    printf("B\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%.0lf ",B[i][j]);
        }
        printf("\n");
    }
    printf("C\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%.0lf ",C[i][j]);
        }
        printf("\n");
    }
}