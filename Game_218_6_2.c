#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int num[2],k[2][n];
    if(n>3&&n<10)
    {
        for(i=0; i<=1; i++)
        {
            num[i]=0;
            scanf("%d",&num[i]);
        }
        for(i=0;i<=1;i++)
        {
            for(j=0;j<=n;j++)
                k[i][j]=0;
        }
        i=0;
        j=0;
        while(1)
        {
            if(num[i]!=0)
            {
                k[i][j]=num[i]%10;
                num[i]/=10;
                j++;
            }
            else if(i<=1)
            {
                i++;
            }
            else
                break;
        }
        for(i=0;i<=1;i++)
        {
            for(j=n-1;j>=0;j--)
            {
                printf("%d",k[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
