
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
constexpr ll MOD=998244353;
const int limit=2e5+5;

void run_case(){
    int n, a1=0,b1=0;
    cin >> n;
    vector<int>a(n),b(n);

    for(int i=0;i<n;i++) {
        cin >> a[i];
        if(a[i]==1) a1++;
    }
    for(int i=0;i<n;i++) {
        cin >> b[i];
        if(b[i]==1) b1++;
    }

    if(a==b) cout<<0<<endl;
    else {

        if(a1!=b1){
            int op=0;
            if(a1>b1){
                for(int i=0;i<n;i++){
                    if(a[i]!=b[i] && b[i]==0 && a1>b1) a[i]=b[i] ,op++ , b1++;
                }
                if(a==b) cout<<op<<endl;
                else cout<<op+1<<endl;
            }
            else{
                for(int i=0;i<n;i++){
                    if(a[i]!=b[i] && b[i]==1 && b1>a1) a[i]=b[i] ,op++ , a1++;
                }
                if(a==b) cout<<op<<endl;
                else cout<<op+1<<endl;
            }
        }
        else cout<<1<<endl;
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
