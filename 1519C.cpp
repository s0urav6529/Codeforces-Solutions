#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define sz(x) int((x).size())
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mpr make_pair
#define pi acos(-1.0)
#define limit 100005
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
constexpr ll imax = 1e9;
constexpr ll imin =-1e9;
constexpr ll mod = 1e9+7;

void solution()
{
    int n;
    cin>>n;
    vector<int>u(n);
    vector<ll>s(n);
    for(int i=0;i<n;i++)
    {
        cin>>u[i];
        u[i]--;
    }
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    vector<ll>v[n];
    for(int i=0;i<n;i++)
    {
        v[u[i]].pb(s[i]);
    }
    vector<ll> ans(n,0);
    for(int i=0;i<n;i++)
    {
        int len=v[i].size();
        if(len==0) continue;
        vector<ll>tv(len);
        int k=0;
        for(int j:v[i]) {
            tv[k++]=j;
        }
        sort(tv.begin(),tv.end());

        for(int j=0;j<len;j++)
        {
            if(j>0) tv[j]+=tv[j-1];
        }
        for(int j=1;j<=len;j++)
        {
            int del=len%j;
            del--;
            if(del>=0) ans[j-1]+=(tv[len-1]-tv[del]);
            else ans[j-1]+=tv[len-1];
        }
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    cout<<endl;
    return;
}
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    cin>>tc;
    while(tc--)
        solution();
    return 0;
}


