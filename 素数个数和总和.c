#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int x;
    int t=0;
    int sum=0;
    for (x=m;x<=n;x++)
    {
        int a=1;
        int b=0;
        for (a=1;a<=x;a++)
        {
            if (x%a==0)
            {
                b++;
            }
        }
        if (b==2)
        {
            t++;
            sum+=x;
        }
    }
    printf("%d %d",t,sum);
}