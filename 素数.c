#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a,n=0;
    for (a=1;a<=x;a++)
    {
        if (x%a==0)
        {
        n++;   
        }
    }
    if (n==2)
    {
        printf("%d是素数",x);
    }
    else 
    {
        printf("%d不是素数",x);
    }
    return 0;
}