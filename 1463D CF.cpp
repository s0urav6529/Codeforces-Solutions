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
const int limit=1000001;


void solution(){

    int n,x;
    cin>>n;

    vector<int>cnt(2*n+1),ans(n+3);

    ans[0]=1;
    ans[n]=1;

    for(int i=1;i<=n;i++) {
        cin>>x;
        cnt[x]=1;
    }

    x=1;
    for(int i=1,j=1;i<=2*n;i++){

        if(cnt[i]==1){

            j=max(i+1,j);

            while(j<=2*n && cnt[j]!=0) j++;

            if(j<=2*n && cnt[j]==0) cnt[j]=2;

            else break;

            ans[x++]++;
        }
    }

    for(int i=1;i<=2*n;i++) if(cnt[i]==2) cnt[i]=0;

    x=n-1;
    for(int i=2*n,j=2*n;i>=1;i--){

        if(cnt[i]==1){

            j=min(j,i-1);

            while(j>=1 && cnt[j]!=0) j--;

            if(j>=1 && cnt[j]==0) cnt[j]=2;

            else break;

            ans[x--]++;
        }
    }

    int res=0;
    for(int i=0;i<=n;i++){

        if(ans[i]==2) res++;
    }
    cout<<res<<endl;

    return;
}
int main()
{
    //fast;
    //read;
    //out;
    int tc=1;
    cin>>tc;
    while(tc--) solution();
    return 0;
}

