
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

    int n,k,r,c;

    cin>>n>>k>>r>>c;

    char a[n+5][n+5];

    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) a[i][j]='.';

    if(k==1) {
        for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cout<<'X'<<" ";
        cout<<endl;
        }
        return;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) {

            if(i%k==1 && j%k==1){

                for(int l=0;;l++){

                    if(i+l>n || j+l>n) break;

                    a[i+l][j+l]='X';
                }

            }
        }
    }

    if(a[r][c]!='X'){

        int d=r/k,put_r,put_c;

        if(r%k) d++;

        bool ok=true;

        for(int i=r-1;ok;i--){

            int d2 = i/k;
            if(i%k) d2++;

            if(d!=d2) break;

            if(a[i][c]=='X') {
                a[i][c]='.';
                a[r][c]='X';
                put_r=i;
                ok=false;
                break;
            }

        }
        for(int i=r+1;ok;i++){

            int d2 = i/k;
            if(i%k) d2++;

            if(d!=d2) break;

            if(a[i][c]=='X') {
                a[i][c]='.';
                a[r][c]='X';
                put_r=i;
                break;
            }

        }
        ok=true;

        d=c/k;

        if(c%k) d++;

        for(int i=c+1;ok;i++){

            int d2 = i/k;
            if(i%k) d2++;

            if(d!=d2) break;

            if(a[r][i]=='X') {
                a[r][i]='.';
                a[put_r][i]='X';
                ok=false;
                break;
            }

        }

        for(int i=c-1;ok;i--){

            int d2 = i/k;
            if(i%k) d2++;

            if(d!=d2) break;

            if(a[r][i]=='X') {
                a[r][i]='.';
                a[put_r][i]='X';
                break;
            }

        }

    }


    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}
