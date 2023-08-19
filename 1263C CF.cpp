#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
set<ll>s;
int main()
{
    fast;
    ll t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;ll i=1;x=sqrtl(n);
        while(i<=x)
        {
            s.insert(n/i);
            s.insert(i);
            i++;
        }
        s.insert(0);
        cout<<s.size()<<endl;
        auto it=s.begin();
        while(it!=s.end())
        {
            cout<<*it<<" ";
            it++;
        }
        cout<<endl;
        s.clear();

    }
    return 0;
}


