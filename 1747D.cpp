#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define uniq(vec)    vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())))
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define min3(a,b,c)  min(a, min(b,c))
#define pyes         cout<<"YES"<<endl
#define pno          cout<<"NO"<<endl
#define pf(a)        cout<<a<<endl
#define p2f(a,b)     cout<<a<<" "<<b<<endl
#define p3f(a,b,c)  cout<<a<<" "<<b<<" "<<c<<endl
#define p4f(a,b,c)  cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl
#define ff first
#define ss second
#define pb push_back
#define pi acos(-1.0)
//cin.get();
typedef long long int ll;
//typedef unsigned long long int llu;
//constexpr llu Mx=18446744073709551615;
constexpr ll MOD=1000000007;
const int limit=1e5+5;


void run_case(){

    int n,q;
    cin >> n >> q;

    vector<ll>a(n+1,0),preXor(n+1,0),zero(n+1,0);

    map<ll,vector<ll>>mp[2];

    for(int i=1;i<=n;i++){
        cin >> a[i];

        preXor[i] = preXor[i-1]^a[i];

        if(a[i]==0) zero[i] = 1;

        zero[i]+=zero[i-1];

        if(i&1){  /// storing odd index
            mp[1][preXor[i]].pb(i);
        }
        else {  /// stroing even index
            mp[0][preXor[i]].pb(i);
        }


    }

    while(q--){

        int l , r;
        cin >> l >> r;

        int len = (r-l)+1;

        if((preXor[r]^preXor[l-1]) != 0){ /// segment Xor not zero
            cout<<-1<<endl;
            continue;
        }

        if((zero[r]-zero[l-1]) == len) { /// all zero
            cout<<0<<endl;
            continue;
        }

        if(len&1){  /// odd
            cout<<1<<endl;
        }
        else{

            if(a[l]==0 || a[r]==0){
                cout<<1<<endl;
                continue;
            }

            ll val = preXor[l-1];

            int pos;

            if(l&1){

                pos = upper_bound(mp[1][val].begin(),mp[1][val].end(),l) - mp[1][val].begin();

                if( pos == mp[1][val].size() || mp[1][val][pos] >=r ) pos=-1;


                //cout<<l <<" " << val << " " <<pos <<endl;

            }
            else {
                pos = upper_bound(mp[0][val].begin(),mp[0][val].end(),l) - mp[0][val].begin();

                if( pos == mp[0][val].size() || mp[0][val][pos] >=r ) pos=-1;

                //cout<<l <<" " << val << " " <<pos <<endl;
            }

            if(pos==-1) cout<<-1<<endl;
            else cout<<2<<endl;


        }

    }

    return;
}

int main(){
    fast;
    int tc=1;
    //cin>>tc;
    while(tc--) run_case();
    return 0;
}
