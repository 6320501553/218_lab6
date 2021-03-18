#include<stdio.h>
int main()
{
    int n,i,j,max=0,min=0,s;
    scanf("%d",&n);
    int num[n][2],mem[n],k,y[n];
    if(n>1&&n<1001)
    {
        for(i=0; i<n; i++)
        {
            mem[i]=i+1;
            for(j=0; j<2; j++)
            {
                scanf("%d",&num[i][j]);
            }
        }
        for(k=0; k<n; k++)
        {
            y[k]=0;
            for(i=0; i<n; i++)
            {
                for(j=0; j<2; j++)
                {
                    if(mem[k]==num[i][j])
                    {
                        y[k]+=1;
                    }
                }
            }
        }
        max=y[0];
        i=0;
        for(i=0; i<n; i++)
        {
            if(y[i]>max)
            {
                max=y[i];
            }
        }
        for(i=0; i<n; i++)
        {
            if(max==y[i])
            {
                s=i;
                break;
            }
        }
        printf("%d ",i+1);
        if(y[num[s][0]]>y[num[s][1]])
        {
            min=y[num[s][1]];
        }
        else if (y[num[s][0]]<y[num[s][1]])
        {
            min=y[num[s][0]];
        }
        printf("%d",min);
        /*for(s=0; s<n; s++)
        {
            if(min==y[s])
            {
                break;
            }
        }
        printf("%d",min);*/
    }
    return 0;
}
