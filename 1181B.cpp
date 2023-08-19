#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define sz(x) int((x).size())
#define rep0(i,k) for (int i=0 ; i<k ; i++)
#define rep(i,k)  for (int i=1 ; i<=k ; i++)
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define min3(a,b,c)  min(a, min(b,c))
#define pyes         cout<<"YES"<<endl
#define pno          cout<<"NO"<<endl;
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mpr make_pair
#define pi acos(-1.0)
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
constexpr ll imax=1e9;
constexpr ll imin=-1e9;
constexpr ll MOD=1e9+7;
const int limit=100005;

int n=limit;

string findsum(string a,string b){

    string res="";
    int carry=0;
    if(a.size()>b.size()) swap(a,b); ///b always big

    int al=a.size()-1,bl=b.size()-1;

    int i,j;
    for(i=al,j=bl;i>=0;i--,j--){

        int sum=(a[i]-'0')+(b[j]-'0')+carry;
        res.pb(sum%10+'0');
        carry=sum/10;
    }

    while(j>=0){
        int sum=(b[j]-'0')+carry;
        res.pb(sum%10+'0');
        carry=sum/10;
        --j;
    }
    if(carry){
        res.pb(carry+'0');
    }

    rev(res);
    return res;
}
void solution(){
    string s;
    cin>>n>>s;
    int zero=0;
    for(char i:s){
        if(i=='0') zero++;
    }

    if(!zero){
        string a=findsum(s.substr(0,n/2),s.substr(n/2));
        string b=findsum(s.substr(0,n/2+1),s.substr(n/2+1));

        if(a.size()<b.size()){
            cout<<a;
            return;
        }
        else if(a.size()>b.size()){
            cout<<b;
            return;
        }
        else if(a<b){
            cout<<a;
            return;
        }
        else{
            cout<<b;
            return;
        }
    }

    int i=n/2,j=n/2;

    while(i>=0){
        if(s[i]!='0') break;
        --i;
    }

    while(j<n){
        if(s[j]!='0') break;
        ++j;
    }
   // cout<<i<<" "<<j<<endl;

    string a=findsum(s.substr(0,i),s.substr(i));
    string b=findsum(s.substr(0,j),s.substr(j));
    if(a.size()<b.size()){
            cout<<a;
            return;
    }
    else if(a.size()>b.size()){
        cout<<b;
        return;
    }
    else if(a<b){
        cout<<a;
        return;
    }
    else{
        cout<<b;
        return;
    }

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


