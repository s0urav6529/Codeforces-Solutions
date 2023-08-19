#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
#define pi acos(-1.0)
ll a[1000005];
ll n;
void solve()
{
    ll rock=0,scissor=0,paper=0;
    string str;
    char c;
    cin>>str;
    for(ll i=0;i<str.size();i++)
    {
        if(str[i]=='R') rock++;
        else if(str[i]=='S') scissor++;
        else paper++;
    }
    ll ans=max(rock,max(scissor,paper));
    if(ans==rock) c='P';
    if(ans==scissor) c='R';
    if(ans==paper) c='S';

    for(ll i=0;i<str.size();i++)
        cout<<c;
    cout<<endl;
    return;
    //MAKE ALL THE INT LL//
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}
