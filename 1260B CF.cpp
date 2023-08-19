#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)swap(a,b);
        cout<<(((a*2)>=b&&(a+b)%3==0)?"YES":"NO")<<endl;
    }
    return 0;
}
