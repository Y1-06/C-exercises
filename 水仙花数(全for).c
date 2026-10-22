#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x;
    int start=1;
    int end=1;
    int k;
    for (k=0;k<(n-1);k++)
    {
        start*=10;
    }
    end=start*10;
    for (x=start;x<end;x++)
    {
        int t=x;
        int d;
        int sum=0;
        for (t=x;t>0;t/=10)
        {
            d=t%10;
            int i=d;
            int s=1;
            for (i=d;s<n;s++)
            {
                i*=d;               
            }
            sum+=i;
        }
        if (sum==x)
            {
                printf("%d\n",x);
            }
    }
    return 0;
}