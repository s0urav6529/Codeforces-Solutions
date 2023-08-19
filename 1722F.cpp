#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define min3(a,b,c)  min(a, min(b,c))
#define pyes         cout<<"Yes"<<endl
#define pno          cout<<"No"<<endl
#define setprecision(y,x)     cout<<fixed<<setprecision(y)<<x<<endl   ///kotoghor , value
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
typedef long double ld;
typedef unsigned long long int llu;
//constexpr llu Mx=18446744073709551615;
constexpr ll MOD=998244353;
const int limit=2e5+5;


void run_case(){

    int n,m; cin >> n >> m;

    char a[n+5][m+5];
    bool vis[n+5][m+5];

    memset(vis,0,sizeof vis);

    for(int i=0;i<=m+1;i++) a[0][i] = '.';
    for(int i=0;i<=m+1;i++) a[n+1][i] = '.';
    for(int i=0;i<=n+1;i++) a[i][0] = '.';
    for(int i=0;i<=n+1;i++) a[i][m+1] = '.';

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) cin>>a[i][j];


    for(int i=0;i<=n+1;i++){
        for(int j=0;j<=m+1;j++) cout<<a[i][j]<<" ";
        cout<<endl;
        }





    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) {

            bool already_vis=false;
            int can_make=0;

            if(a[i][j]=='*' && vis[i][j]==0){

                if(vis[i-1][j] && vis[i-1][j-1] && vis[i][j-1] && vis[i+1][j-1] && vis[i+1][j] && vis[i+1][j+1]
                    && vis[i][j+1] && vis[i-1][j+1] && vis[i][j]) already_vis=true;

                if(a[i-1][j]=='*' && a[i-1][j-1]=='*' && vis[i-1][j-1]==0 && vis[i-1][j]==0)
                    can_make++,vis[i-1][j-1]=1 , vis[i-1][j]=1,  vis[i][j]=1;

                if(a[i][j-1]=='*' && a[i-1][j-1]=='*' && vis[i-1][j-1]==0 && vis[i][j-1]==0)
                    can_make++ , vis[i-1][j-1]=1 , vis[i][j-1]=1 , vis[i][j]=1;

                if(a[i][j-1]=='*' && a[i+1][j-1]=='*' && vis[i+1][j-1]==0 && vis[i][j-1]==0)
                    can_make++ , vis[i+1][j-1]=1, vis[i][j-1]=1 , vis[i][j]=1;

                if(a[i+1][j]=='*' && a[i+1][j-1]=='*' && vis[i+1][j-1]==0 && vis[i+1][j]==0)
                    can_make++ , vis[i+1][j-1]=1 , vis[i+1][j]=1 , vis[i][j]=1;

                if(a[i+1][j]=='*' && a[i+1][j+1]=='*' && vis[i+1][j+1]==0 && vis[i+1][j]==0)
                    can_make++ , vis[i+1][j+1]=1 , vis[i+1][j]=1 , vis[i][j]=1;

                if(a[i][j+1]=='*' && a[i+1][j+1]=='*' && vis[i+1][j+1]==0 && vis[i][j+1]==0)
                    can_make++ , vis[i+1][j+1]=1 , vis[i][j+1]=1 , vis[i][j]=1;

                if(a[i][j+1]=='*' && a[i-1][j+1]=='*' && vis[i-1][j+1]==0 && vis[i][j+1]==0)
                    can_make++ , vis[i-1][j+1]=1, vis[i][j+1]=1 , vis[i][j]=1;

                if(a[i-1][j]=='*' && a[i-1][j+1]=='*' && vis[i-1][j+1]==0 && vis[i-1][j]==0)
                    can_make++ , vis[i-1][j+1]=1 , vis[i-1][j]=1 , vis[i][j]=1;


                if(already_vis || can_make==0) {
                    p2f(i,j);
                    pno;
                    return;
                }
            }

        }

    pyes;


    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}

