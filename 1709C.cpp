#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;

using namespace __gnu_pbds;
template<typename T>
using ordered_set=tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;

#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define sz(x) int((x).size())
#define rep(j,i,k) for (int i=j ; i<k ; i++)
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define min3(a,b,c)  min(a, min(b,c))
#define pyes         cout<<"Yes"<<endl
#define pno          cout<<"No"<<endl
#define pfp(x,y)     cout<<fixed<<setprecision(y)<<x<<endl;
#define pf(a)         cout<<a<<endl;
#define ppf(a,b)      cout<<a<<" "<<b<<endl;
#define pppf(a,b,c)   cout<<a<<" "<<b<<" "<<c<<endl;
#define nl           endl;
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mpr make_pair
#define pi acos(-1.0)
//cin.get();
typedef long long int ll;
typedef unsigned long long int llu;
typedef long double ld;
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
constexpr ll imax=1e9;
constexpr ll imin=-1e9;
constexpr llu Mx=18446744073709551615;
constexpr ll MOD=998244353;
const int limit=2e5+5;

void init_code(){

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif
}


void run_case(){

    int n;
    string s;
    cin>>s;
    n=s.size();

    s[0]='(';
    s[n-1]=')';

    int qm=0,cursum=0;
    for(int i=0;i<n;i++){

        if(s[i]=='(') cursum--;
        else if(s[i]==')') cursum++;
        else qm++;

    }

    if(qm==0){
        pyes;
        return;
    }

    int opening=(cursum+qm)/2;
    int closing=qm-opening;


    if(opening==0 or closing==0){
        pyes;
        return;
    }

    //ppf(opening,closing);

    int copy_closing=closing;
    for(int i=0;i<n;i++){

        if(s[i]=='?'){
            if(opening>1) s[i]='(',opening--;
            else if(opening==1 && closing==copy_closing) s[i]=')',closing--;
            else if(closing+1==copy_closing && opening==1) s[i]='(',opening--;
            else if(closing) s[i]=')',closing--;

        }

    }

    cursum=0;
    for(int i=0;i<n;i++){

        if(s[i]=='(') cursum++;
        else if(s[i]==')') cursum--;

        if(cursum<0) {
            pyes;
            return;
        }

    }
    if(cursum==0) pno;
    else pyes;




    return;
}

int main(){
    fast;
    //init_code();
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}



