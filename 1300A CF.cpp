#include<iostream>
#include<stdio.h>
using namespace std;
int ara[1001];
int main()
{

    int tc,n,sum=0,product=1,cnt=0;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]==0)
            {
                ara[i]+=1;
                cnt++;
            }
            sum+=ara[i];
            product*=ara[i];

        }
        if(sum==0||product==0)
        {
            for(int i=0;i<n;i++)
            {
                if(ara[i]>0){
                    ara[i]+=1;
                    cnt++;
                    sum+=ara[i];
                    product*=ara[i];
                }
                if(sum!=0&&product!=0)
                    break;
            }
        }
        cout<<cnt<<endl;
        sum=0;product=1;
        cnt=0;
    }
    return 0;
}


