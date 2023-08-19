#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T>
using ordered_set=tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
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
#define pyes         cout<<"Yes"<<endl
#define pno          cout<<"No"<<endl
#define pfp(x,y)      cout<<fixed<<setprecision(y)<<x
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mpr make_pair
#define pi acos(-1.0)
//cin.get();
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
constexpr ll imax=1e9;
constexpr ll imin=-1e9;
constexpr ll MOD=1e9+7;
const int limit=100005;

void solution(){
    int n;
    cin>>n;
    deque<int>a,b,c;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }


    int i=0,j=n-1;
    while(i<j){

        if(a[i]<a[j]){

            b.push_front(a[i]);
            c.push_front(a[i]);
            i++;
        }
        else {
            b.push_back(a[j]);
            c.push_back(a[j]);
            j--;
        }
    }
    if(i==j) b.push_back(a[i]),c.push_front(a[i]);

    deque<int>ans;
//    for(auto i:b)
//            cout<<i<<" ";
//    cout<<endl;
//    for(auto i:c)
//            cout<<i<<" ";
//        cout<<endl;

    int k=1;
    if(k==1){
        i=0,j=n-1;
        while(i<j){

            if(b[i]<b[j]){

                ans.push_front(b[i]);
                i++;
            }
            else {
                ans.push_back(b[j]);
                j--;
            }
        }
        bool ok=false;
        if(i==j){

            ok=false;
            ans.push_back(b[i]);
            if(a==ans) ok=true;
            else {
                ans.pop_back();
                ans.push_front(b[i]);
                if(a==ans) ok=true;
            }

        }
        else{
            ok=false;
            if(a==ans) ok=true;
        }
        if(ok==false){
            k=0;
        }
        else{
            for(auto i:b) cout<<i<<" ";
            cout<<endl;
        }
    }
    if(k==0){
        ans.clear();
        i=0,j=n-1;
        while(i<j){

            if(c[i]<c[j]){

                ans.push_front(c[i]);
                i++;
            }
            else {
                ans.push_back(c[j]);
                j--;
            }
        }
        bool ok=false;
        if(i==j){

            ok=false;
            ans.push_back(c[i]);
            if(a==ans) ok=true;
            else {
                ans.pop_back();
                ans.push_front(c[i]);
                if(a==ans) ok=true;
            }

        }
        else{
            ok=false;
            if(a==ans) ok=true;
        }
        if(ok==false){
            cout<<-1<<endl;
        }
        else{

            for(auto i:c) cout<<i<<" ";
            cout<<endl;
        }
    }

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

