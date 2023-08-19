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

    ll n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sortv(a);

    int l=0,r=n,ans=0;

    while(l<=r){

        int mid =l+(r-l)/2;

        deque<int>d;
        for(int i=0;i<n;i++){
            d.push_back(a[i]);
        }

        int k=mid;
        int cnt = 0;
        while(k){
            if(d.size()==0){
                break;
            }
            while(d.size()>0 && d.back()>k){
                d.pop_back();
            }
            if(d.size()>0 && d.back()<=k) {
                d.pop_back();
                cnt++;
            }
            if(d.size()>0) d.pop_front();
            k--;
        }

        if(cnt == mid) ans=max(ans,mid), l=mid+1;
        else r=mid-1;

    }
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

