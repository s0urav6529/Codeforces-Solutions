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
const int limit=2002;


void solution(){

    int n,m;
    cin>>n>>m;

    char a[n+1][m+1],b[n+1][m+1],c[n+1][m+1];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) cin>>a[i][j];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) {
            if(i&1){
                if(j&1) b[i][j]='R';
                else b[i][j]='W';

                 if(j&1) c[i][j]='W';
                 else c[i][j]='R';
            }
            else{
                if(j&1) b[i][j]='W';
                else b[i][j]='R';

                if(j&1) c[i][j]='R';
                else c[i][j]='W';

            }
        }
    }
    int f=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){

            if(a[i][j]!='.' && a[i][j]!=b[i][j]) f=0;
        }
    }
    if(f){
        pyes;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){

                cout<<b[i][j];
            }
            cout<<endl;
        }
        return;
    }
    f=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){

            if(a[i][j]!='.' && a[i][j]!=c[i][j]) f=0;
        }
    }
    if(f){
        pyes;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){

                cout<<c[i][j];
            }
            cout<<endl;
        }
        return;
    }
    pno;
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


