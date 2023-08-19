#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
vector<ll>v;
int main()
{
    fast;
    ll n,k,x=0,sum=0;
    cin>>n;
    v.push_back(0);
    for(ll i=1;;i++)
    {
        sum+=i;
        if(sum>n)
        {
            x=sum-n;
            v.push_back(i);
            break;
        }
        else v.push_back(i);
        if(sum==n)break;
    }
    v.erase(v.begin()+x);
    if(*v.begin()==0) cout<<v.size()-1<<endl;
    else cout<<v.size()<<endl;
    auto it=v.begin();
    while(it!=v.end())
    {
        if(*it==0){it++;continue;}
        cout<<*it<<" ";it++;
    }
    cout<<endl;

}
