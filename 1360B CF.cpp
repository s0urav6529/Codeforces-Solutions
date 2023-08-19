
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ara[n+1];
        for(int i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        int dif,mn=100000000;
        for(int i=0;i<n-1;i++)
        {
            dif=ara[i+1]-ara[i];
            mn=min(dif,mn);
            if(mn==0)
                break;
        }
        cout<<mn<<endl;
    }
}
