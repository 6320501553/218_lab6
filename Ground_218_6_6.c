#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int land[n][m];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            land[i][j]=0;
            scanf("%d",&land[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",land[i][j]);
        }
        printf("\n");
    }
    return 0;
}
