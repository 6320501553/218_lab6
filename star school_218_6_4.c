#include<stdio.h>
int main()
{
    int n,i,j,max=0,min[2],s,l=0,m=0;
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
        for(i=0; i<n; i++)
        {
            for(j=0; j<2; j++)
            {
                if(num[i][j]>0&&num[i][j]<=n)
                {
                    l=1;
                }
                else
                {
                    m=1;
                }
            }
        }
        if(l==1&&m==0)
        {
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
            for(i=0; i<2; i++)
            {
                min[i]=0;
                for(j=0; j<n; j++)
                {
                    if(num[s][i]==mem[j])
                    {
                        min[i]=y[j];
                    }
                }
            }
            if(min[0]>min[1])
                max=min[1];
            else if(min[0]<min[1])
                max=min[0];
            else if(min[0]==min[1])
            {
                if(num[s][0]>num[s][1])
                    max=num[s][1];
                else
                    max=num[s][0];
            }
            for(s=0; s<n; s++)
            {
                if(max==y[s])
                {
                    break;
                }
            }
            printf("%d",s+1);
        }
    }
    return 0;
}
