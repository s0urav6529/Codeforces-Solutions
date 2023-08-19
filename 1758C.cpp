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
const int limit=2e3+5;

void run_case(int t){

    int n , x;
    cin >> n >> x;

    int ans[n+5] ;
    bool vis[n+5];

    for(int i=1;i<=n;i++){
        vis[i]=false;
        ans[i]=-1;
    }

    vis[x]=true;
    vis[1]=true;

    ans[1]=x,ans[n]=1;

    for(int i=2;i<n;i++){

        for(int j=i;j<=n;j+=i){

            if(vis[j]==false && i==j){
                vis[j]=true;
                ans[i]=j;
                break;
            }
            else if(vis[j]==false && (n%j==0)){
                vis[j]=true;
                ans[i]=j;
                break;
            }

        }
        if(ans[i]==-1){
            cout<<-1<<endl;
            return;
        }

    }

    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
    cout<<endl;



    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    for(int t=1;t<=tc;t++) run_case(t);
    return 0;
}

