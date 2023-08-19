#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define mod 1000000007
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);


void solution()
{
    int n,m;
    cin>>n>>m;
    int cnt[m+2];
    ll a[n+2];
    memset(cnt,0,sizeof(cnt));
    bool f=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i]=x;
        cnt[x%m]++;
        if(cnt[x%m]>1) f=1;
    }
    if(f) {
        cout<<0;
        return;
    }
    ll ans=1;
    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){

            ll temp=abs(a[i]-a[j])%m;
            ans=(ans*temp)%m;
        }
    }

    cout<<ans<<endl;


    return;
}
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    //cin>>tc;
    while(tc--) solution();
    return 0;
}







