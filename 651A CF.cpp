#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
ll a[102];
int main()
{
    fast;
    int a,b;
    cin>>a>>b;
    if(a>b)swap(a,b);
    int cnt=0;
    while(a>0&&b>0)
    {
        if(a>b)b++,a-=2;
        else a++,b-=2;
        cnt++;
        if(a<0||b<0)cnt--;
    }
    cout<<cnt<<endl;
    return 0;
}

