#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define ff first
#define ss second
#define Mod 1000000007
using namespace std;
using ll=long long;
using ld=long double;
//vector<ll>v1,v2;
//vector<string>s;
//unordered_map<ll,ll>ump;
//map<ll,ll>Mp;
//set<ll>sl;
//set<pair<ll,ll>>sp;
//ll a[1000005];
//ll b[1000005];
//ll dp[10005][10005];
//ll pos[1000005],neg[1000005];
string a[52];
int n;
string s,p,c,h;
///*************************Keep Coding***********************************
/*bool compair(pair<ll,ll>a,pair<ll,ll>b)///sort the first value decending and second value ascending
{
    if(a.ff==b.ff)return a.ss<b.ss;
    return a.ff>b.ff;
}*/
/*bool compair(string a,string b)///sort string by size
{
    return a.size()<b.size();
}*/
/*bool sign(ll num)///positive or negative
{
    return num>0;
}*/
void solve()
{
    int ans=INT_MAX;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        int total=0,x=0;
        for(int j=1;j<=n;j++)
        {
            int cnt=0;
            if(a[i]!=a[j])
            {
                s=a[i],p=a[j];
                for(int k=1;k<=s.size();k++)
                {
                    c=p[0]; h=p.substr(1,p.size()-1);
                    p.clear(); p+=h+c; cnt++;
                    if(p==s)
                    {
                        total+=cnt;
                        x++;break;
                    }
                }
            }
            else x++;
        }
        if(x==n)ans=min(ans,total);
    }
    if(ans==INT_MAX)cout<<-1<<endl;
    else cout<<ans<<endl;
    return;
    ///********************MAKE ALL THE INT LL****************************
}
int main()
{
    fast;
    //read;//out;
    //ll t;
    //cin>>t;
    //while(t--)
    solve();
    return 0;
}

