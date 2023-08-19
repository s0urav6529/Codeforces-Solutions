
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
#define pno          cout<<"NO"<<endl
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
const int limit=100001;

void solution(){

    int r,c;
    cin>>r>>c;
    int a[r+5][c+5];
    for(int i=1;i<=r+2;i++)
        for(int j=1;j<=c+2;j++) {
            if(i==1 && j==1) a[i][j]=1;
            else if(i==1 && j==c) a[i][j]=1;
            else if(i==r && j==1) a[i][j]=1;
            else if(i==r && j==c) a[i][j]=1;
            else a[i][j]=0;
        }

    for(int i=3;i<=c;i+=2){
        if(a[1][i-1]==0 && a[1][i+1]==0) a[1][i]=1;
    }
    for(int i=3;i<=c;i+=2){
        if(a[r][i-1]==0 && a[r][i+1]==0) a[r][i]=1;
    }
    for(int i=3;i<=r;i+=2){
        if(a[i-1][1]==0 && a[i+1][1]==0) a[i][1]=1;
    }
    for(int i=3;i<=r;i+=2){
        if(a[i-1][c]==0 && a[i+1][c]==0) a[i][c]=1;
    }
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++)
           cout<<a[i][j];
        cout<<endl;
    }



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

