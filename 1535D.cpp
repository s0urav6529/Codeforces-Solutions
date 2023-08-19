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
#define limit 100005
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
constexpr ll imax = 1e9;
constexpr ll imin =-1e9;
constexpr ll mod = 1e9+7;


void solution(){

    int k;
    string s;
    cin>>k>>s;

    int n=1<<(k+1); ///total node with leaf
    vector<int>tree(n);
    s.pb('x');
    rev(s);

    for(int i=(1<<k);i<n;i++) tree[i]=1;

    for(int i=(1<<k)-1;i>0;i--){

        if(s[i]=='1'){
            tree[i]=tree[i*2];
        }

        else if(s[i]=='0'){
            tree[i]=tree[i*2+1];
        }

        else{
            tree[i]=tree[i*2+1]+tree[i*2];
        }
    }
    int q;
    cin>>q;

    while(q--){
        int i;
        char c;
        cin>>i>>c;
        i=(1<<k)-i;
        s[i]=c;

        while(i){

            if(s[i]=='1'){
                tree[i]=tree[i*2];
            }

            else if(s[i]=='0'){
                tree[i]=tree[i*2+1];
            }

            else{
                tree[i]=tree[i*2+1]+tree[i*2];
            }
            i/=2;
        }

        cout<<tree[1]<<endl;
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


