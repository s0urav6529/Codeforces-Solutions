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

    int n;
    cin>>n;

    int intial_gifeter[n+1];
    int already_gifted[n+1];
    int final_list[n+1];
    int gift_by[n+1];

    for(int i=1;i<=n;i++) {  ///initialize
        intial_gifeter[i]=0;
        already_gifted[i]=0;
        gift_by[i]=0;
    }

    stack<int>notgifted;

    int ans=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;

        intial_gifeter[i]=x;

        if(already_gifted[x]==1){
            final_list[i]=-1;
        }
        else{
            ans++;
            gift_by[x]=i;
            already_gifted[x]=1;
            final_list[i]=x;
        }

    }

    for(int i=1;i<=n;i++){
        if(already_gifted[i]==0){
            notgifted.push(i);
        }
    }

    if(notgifted.size()==1){
        int tp=notgifted.top();

        if(final_list[tp]==-1){

            final_list[tp]=intial_gifeter[tp];

            final_list[gift_by[intial_gifeter[tp]]]=tp;
        }
    }

    int last;

    for(int i=1;i<=n;i++){

        if(final_list[i]==-1){

            int tp=notgifted.top();
            notgifted.pop();

            if(i==tp){

                if(notgifted.size()>0){
                    final_list[i]=notgifted.top();
                    notgifted.pop();
                    notgifted.push(tp);
                    last=i;
                }
                else{
                    final_list[i]=tp;
                    swap(final_list[last],final_list[i]);
                }
            }
            else{
                final_list[i]=tp;
                last=i;
            }
        }
    }
    cout<<ans<<endl;

    for(int i=1;i<=n;i++) cout<<final_list[i]<<" ";
    cout<<endl;
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


