#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll ara[1000002];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    ll n,x,ppl=0,sum=0,cnt=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        for(ll i=0;i<n;i++) cin>>ara[i];
        sort(ara,ara+n);
        for(ll i=n-1;i>=0;i--)
        {
            sum+=ara[i];
            ppl++;
            if((sum/ppl)>=x)
                cnt++;
            else
                break;
        }
        cout<<cnt<<endl;
        cnt=0;
        sum=0;
        ppl=0;
    }
    return 0;
}
