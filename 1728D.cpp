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
#define setprecision(y,x)     cout<<fixed<<setprecision(y)<<x<<endl   ///kotoghor , value
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
typedef long double ld;
typedef unsigned long long int llu;
//constexpr llu Mx=18446744073709551615;
constexpr ll MOD=998244353;
const int limit=2e3+5;

string s;

ll dp[limit][limit];

/// Alice->0 Draw->1 Bob->2

ll rec(int i,int j){

    if(i>j) return 1;

    if(dp[i][j]!=-1) return dp[i][j];

    ll sururdike = -1 , seserdike = -1;

    ll paici = rec(i+2,j);

    if(s[i] < s[i+1]){

        if(paici == 2){
            sururdike = 2;
        }
        else sururdike = 0;
    }
    else if(s[i] == s[i+1]){
        sururdike = paici;
    }
    else{

        if(paici == 0) sururdike = 0;
        else sururdike = 2;
    }

    paici = rec(i+1,j-1);

    if(s[i] < s[j]){

        if(paici == 2){
            sururdike = max(sururdike , 2ll);
        }
        else sururdike = max(sururdike, 0ll);
    }
    else if(s[i] == s[j]){
        sururdike = max(sururdike, paici);
    }
    else{

        if(paici == 0) sururdike = max(sururdike, 0ll);
        else sururdike = max(sururdike, 2ll);
    }

    paici = rec(i,j-2);

    if(s[j] < s[j-1]){

        if(paici == 2){
            seserdike = 2;
        }
        else seserdike = 0;

    }
    else if(s[j] == s[j-1]){
        seserdike = paici;
    }
    else {

        if(paici == 0) seserdike = 0;
        else seserdike = 2;
    }

    paici = rec(i+1,j-1);

    if(s[j] < s[i]){
        if(paici == 2) seserdike = max(seserdike , 2ll);
        else seserdike = max(seserdike , 0ll);
    }
    else if(s[j] == s[i]){
        seserdike = max(seserdike , paici);
    }
    else{
        if(paici == 0) seserdike = max( seserdike , 0ll);
        else seserdike = max(seserdike , 2ll);
    }

    return dp[i][j]=min(sururdike , seserdike);

}

void run_case(){

    cin >> s;

    int n= s.size();

    for(int i=0;i<=n;i++) {
        for(int j=0;j<=n;j++) dp[i][j]=-1;
    }

    ll ans=rec(0,n-1);

    if(ans==0) cout<<"Alice"<<endl;
    else if(ans==2) cout<<"Bob"<<endl;
    else cout<<"Draw"<<endl;

    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}

