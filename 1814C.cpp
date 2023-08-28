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
const int limit=1e5+5;

void an1nd1ta(int tc){
    
    int n;
    ll s1 , s2;
    cin >> n >> s1 >> s2;

    vector<pair<ll,int>>v(n);

    for(int i=0;i<n;i++){

        cin >> v[i].first;
        v[i].second = i+1;
    }

    sortv(v);
    rev(v);

    vector<int>a,b;

    ll temps1 = s1 , temps2 = s2;

    for(int i=0;i<n;i++){

        ll t_s1 = v[i].first * temps1;

        ll t_s2 = v[i].first * temps2;

        if(t_s1 <= t_s2){

            a.pb(v[i].second);

            ll sz = a.size();

            temps1 = (s1*(sz+1ll));
        }
        else{

            b.pb(v[i].second);

            ll sz = b.size();
            
            temps2 = (s2*(sz+1ll));
        }


    }

    cout << a.size() << " ";
    for(int i=0;i<a.size();i++) cout << a[i] <<" ";
    cout << endl;

    cout << b.size() << " ";

    for(int i=0;i<b.size();i++) cout << b[i] <<" ";
    cout << endl;

    return;
}

int main(){
    fast;
    int testcase=1;
    cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}