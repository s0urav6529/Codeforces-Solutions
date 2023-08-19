#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define min3(a,b,c)  min(a, min(b,c))
#define pyes         cout<<"Yes"<<endl
#define pno          cout<<"No"<<endl
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
constexpr ll MOD=998244353;
const int limit=2e5+5;

ll index_helper[limit];
void precompute(){

    for(int i=1;i<=limit;i++){
        ll N=i;
        ll help=0;
        while(N%2==0){
            help++;
            N/=2;
        }
        index_helper[i]=help;
    }
}



void run_case(){

    ll n;
    cin >> n;

    ll ache =0;
    for(int i=0;i<n;i++){
        ll x;
        cin >> x;
        while(x%2==0){
            x/=2;
            ache++;
        }
    }

    vector<int>have;
    for(int i=1;i<=n;i++){
        have.push_back(index_helper[i]);
    }
    sortv(have);
    rev(have);

    int op=0;
    bool ok=false;
    for(int i=0;i<n;i++){

        if(ache>=n) {
            ok=true;
            break;
        }
        ache+=have[i];
        op++;
    }
    if(ok) cout<<op<<endl;
    else cout<<-1<<endl;

}

int main(){
    fast;
    precompute();
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}
