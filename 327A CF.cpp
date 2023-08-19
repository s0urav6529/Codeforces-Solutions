#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define pb push_back ;
#define mpr make_pair ;
#define mod 1000000007;
#define pi acos(-1.0);
#define mx INT_MIN
#define mn INT_MAX
//#define ff first;
//#define ss second;
#define inf 1e9
#define linf 1e18
#define eps 1e-9
#define el endl;
using namespace std;
using ll=long long;
using ld=long double;
int a[105];
vector<pair<ll,ll>>vp;
int main()
{
    fast;
    int n,one=0,zero=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i])one++;
        else zero++;
    }
    if(one==n)cout<<one-1<<endl;
    else if(zero==n)cout<<zero<<endl;
    else
    {
        int i=0,cnt=0;
        while(a[i])cnt++,i++;
        int s=i;
        i=n;
        while(a[i])cnt++,i--;
        int e=i,all=0,one=0;
        for(int i=s;i<=e;i++)
        {
            if(a[i])one++;
            all++;
        }
        all=max(all,one);
        one=min(all,one);
        cout<<cnt+(all-one)<<endl;
    }
    return 0;
}



