#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
ll a[105];
int main()
{
    fast;
    int n,total=0,tot=1;
    cin>>n;
    int x=3;
    for(int i=2;i<=x&&i<=n;i++)
    {
        tot*=i;
        if(i==x){total+=tot,x+=1;tot=1;i--;}
    }
    cout<<total<<endl;
    return 0;
}

