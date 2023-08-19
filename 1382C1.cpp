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
#define pyes         cout<<"YES"<<endl
#define pno          cout<<"NO"<<endl
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
const int limit=1e3+5;

int a[limit] , b[limit];


void make_op(int i){

    int k=0,j=i;

    while(k<=j){
        swap(a[k++],a[j--]);
    }

    for(j=0;j<=i;j++) a[j]=1-a[j];
    return;

}

void run_case(){

    int n;
    char ch;
    cin >> n ;

    for(int i=0;i<n;i++){
        cin >> ch;
        a[i] = ch-'0';
    }
    for(int i=0;i<n;i++){
        cin >> ch;
        b[i] = ch-'0';
    }

    vector<int>ans;

    for(int i=n-1;i>=0;i--){

        if(a[i]!=b[i]){

            if(a[0] == b[i]){
                a[0] = 1-b[i];
                ans.pb(1);
            }

            if(a[i]!=b[i]) {
                ans.pb(i+1);
                make_op(i);
            }
        }
    }

    cout<<ans.size()<<" ";
    for(auto i:ans) cout<<i<<" ";
    cout<<endl;

    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}

