#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using dd=double;
set<ll>s;
int a[2005],prefix[2005],suffix[2005];


void solve()
{
    int n;
    cin>>n;
    int ans=0;
    map<int,int>mp;
    for(int i=1;i<=n;i++) {
        cin>>a[i];
        mp[a[i]]++;
        if(mp[a[i]]==2) ans++;
        prefix[i]=0,suffix[i]=0;
    }
    if(!ans){
        cout<<ans<<endl;
        return;
    }
    prefix[0]=1,suffix[n+1]=1;

    mp.clear();
    for(int i=1;i<=n;i++) {
        mp[a[i]]++;

        prefix[i]=max(prefix[i-1],mp[a[i]]);
    }

    mp.clear();
    for(int i=n;i>=1;i--) {
        mp[a[i]]++;
        suffix[i]=max(suffix[i+1],mp[a[i]]);
    }

    ans=n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            bool ok=false;
            if((prefix[i-1]==1) && (suffix[j+1]==1)) {
                ok=true;
                cout<<i<<" "<<j<<" "<<j-i+1<<endl;
                ans=min(ans,j-i+1);
            }
        }
    }
    cout<<ans<<endl;







}
int main()
{
    fast;
    solve();
    return 0;
}




