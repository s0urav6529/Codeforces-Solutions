#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define ff first
#define ss second
using namespace std;
using ll=long long;
using ld=long double;
vector<ll>v1,v2;
unordered_map<ll,ll>ump;
map<ll,ll>mp;
set<ll>st;
ll a[1000005];
ll fre[100005];
ll pos[1000005],neg[1000005];
ll n,m;
/*bool compair(pair<ll,ll>a,pair<ll,ll b>)///sort the first value decending and second value ascending
{
    if(a.ff==b.ff)return a.ss<b.ss;
    return a.ff>b.ff;
}*/
/*bool sign(ll num)///positive or negative
{
    return num>0;
}*/
void solve()
{
    cin>>n;
    memset(fre,0,sizeof(fre));
    for(ll i=1;i<=n;i++)cin>>a[i];
    ll i=1,j=2;
    st.insert(a[i]);
    st.insert(a[j]);
    fre[a[i]]++,fre[a[j]]++;
    ll mn=*st.begin(),mx=*st.rbegin();
    ll ans=0;
    while(j<=n)
    {
        if(mx-mn<=1)
        {
            while(mx-mn<=1)
            {
                ans=max(ans,j-i+1);
                if(j<n)
                {
                    j++;
                    st.insert(a[j]);
                    fre[a[j]]++;
                    mn=*st.begin(),mx=*st.rbegin();
                }
                else if(j==n)
                {
                    cout<<ans<<endl;
                    return;
                }
            }
        }
        else
        {
            if(fre[a[i]]>1)fre[a[i]]--;
            else st.erase(a[i]),fre[a[i]]=0;
            i++;
            st.insert(a[i]);
            mn=*st.begin(),mx=*st.rbegin();
        }
    }
    cout<<ans<<endl;
    return;
    ///********************MAKE ALL THE INT LL************************
}
int main()
{
    fast;
    //ll t;
    //cin>>t;
    //while(t--)
    solve();
    return 0;
}




