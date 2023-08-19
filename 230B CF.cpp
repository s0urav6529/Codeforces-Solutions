#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int tc;
    ll i,x;
    cin>>tc;
    while(tc--)
    {
        cin>>x;
        ll root=sqrtl(x);
        for(i=2;i*i<root;i++)if(x%i==0)break;
        if(i*i>root&&root*root==x&&x>1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
