#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen  ("out.txt","w",stdout);
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define uniq(vec)    vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())))
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define min3(a,b,c)  min(a, min(b,c))
#define pyes         cout<<"Yes"<<endl
#define pno          cout<<"No"<<endl
#define pf(a)        cout<<a<<endl
#define p2f(a,b)     cout<<a<<" "<<b<<endl
#define p3f(a,b,c)   cout<<a<<" "<<b<<" "<<c<<endl
#define p4f(a,b,c)   cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl
#define ff first
#define ss second
#define pb push_back
#define pi acos(-1.0)
//cin.get();
typedef long long int ll;
//typedef unsigned long long int llu;
//constexpr llu Mx=18446744073709551615;
constexpr ll MOD=1e9+7;
const int limit=1e5+5;

void an1nd1ta(int tc){
    
    ll n , x;
    cin >> n >> x;

    int msb = 0;
    vector<int>nbit(64,0) , xbit(64,0);
    vector<ll>Pow(64,0);

    ll p = 1;
    for(ll i=0;i<=60;i++,p =p*2LL){

        if(n&(1LL<<i)) nbit[i] = 1;
        if(x&(1LL<<i)) xbit[i] = 1;

        if(!nbit[i] && xbit[i]){ // n has i'th bit = 0 && x i'th bit = 1
            cout<<-1<<endl;
            return;
        }
        if(nbit[i]) msb = i;
        Pow[i] = p;

    }
    ll number = 0 , shift = -1 , extra_add = 0;

    for(ll i=msb;i>=0;i--){

        if(nbit[i] && !xbit[i]){  /// n has i'th bit = 1 && x i'th bit = 0
            shift = i;
            extra_add = 1;
            break;
        }
    }

    //cout<< msb<<" "<<shift<<endl;


    if(shift == -1) shift = msb+1;

    for(ll i=shift;i<=msb;i++){

        if(nbit[i]){  

            if(nbit[i+1] && extra_add){ /// 11 case
                cout << -1 <<endl; 
                return; 
            }

            else {
                number += Pow[i+extra_add];
                extra_add = 0;
            }
        }
    }

    for(int i=0;i<shift;i++){
        
        if(xbit[i]) {
            
            if(shift > msb){
                number += Pow[i];
            }
            else{   /// shift er karone bit change hole 0 chole asbe so x ar hbe na
                cout << -1 <<endl;
                return;
            }
        }

    }
    cout<<number<<endl;

    return;
}

int main(){
    fast;
    int testcase=1;
    cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}