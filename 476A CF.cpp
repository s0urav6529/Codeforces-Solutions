#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
using namespace std;
using ll=long long;
using ld=long double;
ll a[1000005];
ll n,m;
//vector<ll>a,b;
void solve()
{
    ll mn=INT_MAX;
    cin>>n>>m;
    if(n<m)cout<<"-1"<<endl;
    else if(n==m)cout<<m<<endl;
    else
    {
        for(ll i=1;(i*2)<=n;i++)
        {
            if(i*2<=n)
            {
                ll two=i*2;
                ll one=n-two;
                if((i+one)%m==0)mn=min(mn,i+one);
            }
        }
        cout<<mn<<endl;
    }
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




