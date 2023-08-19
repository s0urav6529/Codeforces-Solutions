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
    int n;
    cin>>n;
    ll GCD=0;
    for(int i=0;i<n;i++) {
        ll x;
        cin>>x;
        GCD=__gcd(GCD,x);
    }
     ll cnt=0;
     for(ll i=1;i*i<=GCD;i++){
        if(GCD%i==0){
          cnt++;
          if(i*i!=GCD) cnt++;
        }
      }
    cout<<cnt<<endl;

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




