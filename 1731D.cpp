#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define uniq(vec)    vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())))
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
constexpr ll MOD=1000000007;
const int limit=1e5+5;

void an1nd1ta(int tc){

    int n , m;

    cin >> n >> m;

    int a[n+5][m+5];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) cin >> a[i][j];
    }

    ll l = 1 , r = min(n,m) ,ans = 1;

    while(l<=r){

        ll mid = l+(r-l)/2;

        ll sum [n+5][m+5];

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++) {
                if(a[i][j]>=mid) sum[i][j] = mid;
                else sum[i][j] = 0;
            }
        }

        for(int i=1;i<=n;i++){

            for(int j=1;j<=m;j++){

                sum[i][j] += sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];
            }
        }

        bool ok=false;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){

                if((i+mid-1>n) || (j+mid-1>m)) continue;

                ll bot_right=sum[i+mid-1][j+mid-1];
                ll bot_left=sum[i+mid-1][j-1];
                ll top_right=sum[i-1][j+mid-1];
                ll add=sum[i-1][j-1];

                ll sum=bot_right-bot_left-top_right+add;

                if(mid*mid*mid == sum) {
                    ok=true;
                    break;
                }
            }
            if(ok) break;
        }
        if(ok){
            ans=max(ans,mid);
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }

    cout<<ans<<endl;



    return;
}

int main(){
    fast;
    int testcase=1;
    cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}


