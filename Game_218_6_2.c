#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int num[2],k[2][n],sum=0,min=0;
    if(n>3&&n<10)
    {
        for(i=0; i<2; i++)
        {
            num[i]=0;
            scanf("%d",&num[i]);
        }
        for(i=0; i<=1; i++)
        {
            for(j=0; j<=n; j++)
                k[i][j]=0;
        }
        for(i=0; i<2; i++)
        {
            for(j=0; j<n; j++)
            {
                if(num[i]!=0)
                {
                    k[i][j]=num[i]%10;
                    num[i]/=10;
                }
            }
        }
    }
    for(j=n-1; j>=0; j--)
    {
        if(k[0][j]!=k[1][j])
        {
            min++;
        }
        if(k[0][j]==k[1][j])
        {
            sum++;
        }
    }
    printf("%d %d",sum,min);
    return 0;
}
