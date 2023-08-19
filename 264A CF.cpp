#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
void solve()
{
    string str;
    cin>>str;
    for(ll i=0;i<str.length();i++)
    {
        if(str[i]=='r') cout<<i+1<<" ";
    }
    for(ll i=str.length()-1;i>=0;i--)
    {
        if(str[i]=='l') cout<<i+1<<" ";
    }
    cout<<endl;
    return;
}
int main()
{
    fast;
    solve();
    return 0;
}
