#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{

    freopen("in.txt","r",stdin);
    int n,cnt=0,max=0;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ara[j]==ara[i])
            {
                cnt++;
            }
            else
            {
                if(cnt>max)
                {
                    max=cnt;
                }
            }

        }
        if(cnt>max)
            max=cnt;
        cnt=0;
    }
    if(max==0)
        cout<<max+1<<endl;
    else
        cout<<max<<endl;
    return 0;
}

