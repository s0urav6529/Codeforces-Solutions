#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using dd=double;
int main()
{
    fast;
    ll t,a,b;
    cin>>t;
    while(t--){
    cin>>a>>b;
    if(a>b)swap(a,b);
    if(a==b)cout<<(a+b)/3<<endl;
    else if(a==0|| b==0)cout<<"0"<<endl;
    else if(a*2<=b)cout<<a<<endl;
    else cout<<(a+b)/3<<endl;
    }
    return 0;
}


