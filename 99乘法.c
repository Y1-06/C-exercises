#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x,y;
    for (x=1;x<=n;x++)
    {
        for (y=1;y<=x;y++)
        {
            printf("%d*%d=%d",y,x,x*y);
            if (x*y>=10)
            printf("  ");
            else printf("   ");
        }
        printf("\n");
    }
    return 0;
}
