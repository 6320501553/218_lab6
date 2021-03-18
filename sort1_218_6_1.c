#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char cha[n];
    for(i=0; i<=n; i++)
    {
        scanf("%s",&cha[i]);
        fflush(stdin);
    }
    int k;
    for(i=0; i<=n; i++)
    {
        printf("%s",cha[i]);
        printf("\n");
    }
    return 0;
}
