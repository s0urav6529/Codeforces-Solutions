#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen  ("out.txt","w",stdout);
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
#define p3f(a,b,c)   cout<<a<<" "<<b<<" "<<c<<endl
#define p4f(a,b,c)   cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl
#define ff first
#define ss second
#define pb push_back
#define pi acos(-1.0)
//cin.get();
typedef long long int ll;
//typedef unsigned long long int llu;
//constexpr llu Mx=18446744073709551615;
constexpr ll MOD=1e9+7;
const int limit=1e3+5;

bool vis[limit];   
void seive(){
    
    vis[0]=vis[1]=1;
    
    for(int i=4; i<limit; i+=2) vis[i] = 1;
    
    for(int i=3; i*i<limit; i+=2){
        
        if(vis[i]) continue;
        for(int j=i*i; j<limit; j+=2*i) {
            vis[j] = 1;
        }
    }

}

void an1nd1ta(int tc){
    int n , m;
    cin >> n >> m;

    if(m % 2 == 0){
        ll k = 1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cout << k <<" ";
                k++;
            }
            cout << endl;
        }
    }
    else {

        if(vis[m] == 1){
            ll k = 1;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    cout << k <<" ";
                    k++;
                }
                cout << endl;
            }
        }
        else{

            int odr = n/2+1 , er = 1;

            int a[n+5][m+5];
            ll k = 1;

            for(int i=1;i<=n;i++){

                for(int j=1;j<=m;j++){

                    if(i & 1){
                        a[odr][j] = k;
                    }

                    else{
                        a[er][j] = k;
                    }

                    k++;
                }
                if(i&1) odr++;
                else er++;
            }

            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    cout << a[i][j] <<" ";
                }
                cout << endl;
            }

        }

    }

    return;
}

int main(){
    fast;
    seive();
    int testcase=1;
    cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}