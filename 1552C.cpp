
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
const int limit=100001;


void solution(){

    int n;
    cin>>n;
    int a[n+2][6];
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++) cin>>a[i][j];
    }

    if(n==1){
        cout<<1<<endl;
        return;
    }

    vector<pair<int,int>>v[5];
    for(int i=0;i<5;i++){
        for(int j=0;j<n;j++){
            v[i].pb({a[j][i],j});
        }
        sort(v[i].begin(),v[i].end());
    }

    vector<vector<int>>cnt(5,vector<int>(n));

    for(int i=0;i<5;i++){

        for(int j=0;j<n;j++){

            int pos=v[i][j].ss;
            cnt[i][pos]+=j;
            //cout<<cnt[i][pos]<<endl;
        }
        //cout<<endl;
    }
    vector<int>ct(n);

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<5;j++){
            cout<<(cnt[j][i])<<" ";
        }
        cout<<endl;
        ct[i]=sum;
    }

    int ans=n,mn=1e9;
    for(int i=0;i<n;i++){

        if(mn>=ct[i]){
            ans=i;
            mn=ct[i];
        }
    }
    int ppl=0;
    for(int i=0;i<n;i++){
        if(ct[i]==mn) ppl++;
    }
    //if(ppl==n) cout<<-1<<endl;
    //else cout<<ans+1<<endl;





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
