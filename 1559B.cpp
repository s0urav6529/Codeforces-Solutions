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
#define pyes         cout<<"Yes"<<endl
#define pno          cout<<"No"<<endl
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
const int limit=200001;

void solution(){

    string s;
    int n;
    cin>>n>>s;

    string p;
    for(int i=0;i<s.size();i++){
        if(i&1) p+='R';
        else p+='B';

        if(s[i]!='?') {
            p.pop_back();

            p+=s[i];
        }
    }
    int i;
    for(i=0;i<n;i++){

        if(s[i]!='?'){
            char prev=s[i];
            for(int j=i-1;j>=0;j--){

                if(prev=='B') p[j]='R';
                else p[j]='B';
                prev=p[j];
            }
            break;
        }
    }

    for(i=i+1;i<n;i++){

        if(s[i]!='?'){
            char prev=s[i];
            for(int j=i-1;j>=0 && s[j]=='?';j--){

                if(prev=='B') p[j]='R';
                else p[j]='B';
                prev=p[j];
            }
        }
    }

    for(int i=n-1;i>=0;i--){

        if(s[i]!='?'){
            char prev=s[i];
            for(int j=i+1;j<n;j++){

                if(prev=='B') p[j]='R';
                else p[j]='B';
                prev=p[j];
            }
            break;
        }
    }


    cout<<p<<endl;

    return;
}
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    cin>>tc;
    while(tc--) solution();
    return 0;
}


