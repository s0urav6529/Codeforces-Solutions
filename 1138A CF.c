#include<stdio.h>
int ara[100001];
int main()
{
    int n,i,t1=0,t2=0,temp,sub=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);
    for(i=0;i<n;i++)
    {
        if(ara[i]==1)
        {
            t1++;
            if(t2>0&&(ara[i+1]==2||i==n-1))
            {
                if(t1>t2)
                    temp=t2;
                else
                    temp=t1;
                if(temp>sub)
                    sub=temp;
                t2=0;
            }
        }
        else if(ara[i]==2)
        {
            t2++;
            if(t1>0&&(ara[i+1]==1||i==n-1))
            {
                if(t1>t2)
                {
                    temp=t2;
                }
                else
                    temp=t1;
                if(temp>sub)
                    sub=temp;
                t1=0;
            }
        }

    }
    printf("%d\n",sub*2);
    return 0;
}
