#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define sz(x) int((x).size())
#define fr0(p,i,k,z) for (ll i=p ; i<k ; i+=z)
#define fr1(p,i,k,z) for (ll i=p ; i<=k ; i+=z)
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define pyes         cout<<"YES"<<endl
#define pno          cout<<"NO"<<endl
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mpr make_pair
#define pi acos(-1.0)
#define limit 100005
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
constexpr ll imax = 1e9;
constexpr ll imin =-1e9;
constexpr ll mod = 1e9+7;


void solution()
{
    int n;
    cin>>n;
    int a[n+2][n+2];
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n==2) {
        cout<<-1<<endl;
        return;
    }
    int cnt=n*n;
    //cout<<cnt<<endl;
    for(int gap=1;gap<=n;gap++) ///Diagonal traversal
    {
        for(int r=1,c=gap;r<=n,c<=n;r++,c++)
        {
            //cout<<r<<" "<<c<<endl;
            a[r][c]=cnt--;
        }
        if(gap>1)
        {
            for(int r=gap,c=1;r<=n;r++,c++)
            {
                //cout<<r<<" "<<c<<endl;
                a[r][c]=cnt--;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cout<<a[i][j]<<" ";
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
    while(tc--)
        solution();
    return 0;
}
 
