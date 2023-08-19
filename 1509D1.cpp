
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

char mfc(int n,string p){

    int zero=0,one=0;

    for(int i=0;i<2*n;i++){
        if(p[i]=='0') zero++;
        else one++;
    }
    if(one>=zero) return '1';
    return '0';
}

void run_case(){
    int n;
    string a,b,c;
    cin >> n >> a >> b >> c;

    string x,y;
    char MFC;

    /// Case1 a,b
    if(mfc(n,a) == mfc(n,b)){
        x=a,y=b;
        MFC=mfc(n,a);
    }

    ///Case2 a,c
    else if(mfc(n,a) == mfc(n,c)){
        x=a,y=c;
        MFC=mfc(n,a);
    }

    ///Case3 b,c
    else if(mfc(n,b) == mfc(n,c)){
        x=b,y=c;
        MFC=mfc(n,b);
    }

    int l=0,r=0;
    string ans="";

    while(l<x.size() && r<y.size()){

        while(l<x.size() && x[l]!=MFC){
            ans+=x[l];
            l++;
        }

        while(r<y.size() && y[r]!=MFC){
            ans+=y[r];
            r++;
        }

        if(l<x.size() && r<y.size() && x[l]==y[r] && x[l]==MFC){
            ans+=x[l];
            l++;
            r++;
        }

    }

    while(l<x.size()) ans+=x[l++];
    while(r<y.size()) ans+=y[r++];

    cout<<ans<<endl;

    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}
