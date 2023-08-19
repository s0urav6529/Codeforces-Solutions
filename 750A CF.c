#include<stdio.h>
int main()
{
    int n,k,left,i,count=0,sum=0;
    scanf("%d%d",&n,&k);
    left=240-k;
    for(i=1;i<=n;i++)
    {
        sum+=(5*i);
        if(sum<=left)
        {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
