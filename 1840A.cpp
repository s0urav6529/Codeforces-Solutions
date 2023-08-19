#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;
constexpr ll MOD=1e9+7;
const int limit=1e9+5;

ll prefix[40] , single[40];

void calculate(){


    ll add = 1;

    for(ll i=1;add < limit;i++){

        prefix[i] = prefix[i-1] + add;

        single[i] = add;
        //cout << prefix[i] <<" "<<single[i]<<endl;

        add *= 2ll;
    }


}

void solve(){

    ll n , k ;
    cin >> n >> k ;
    ll ans = 0;
    ll i = 1;
    while(prefix[i++] <= n){
        ans ++;
        if(i > k) break;
    }

    cout << ans <<endl;
    return;
}
int main(){
    fast;
    calculate();
    int tc;
    cin >> tc;
    while(tc--) solve();
    return 0;
}


