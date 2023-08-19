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
    
    ll a  , b;
	cin >> a >> b;

	if(a > b) swap(a,b);

    ll g = __gcd(a,b);

    ll ans = 0;

    if(g == 1){

    	if((a&1) && (b&1)) ans+=2 , a-- , b --;
    	else if(a&1) ans++,a--;
    	else ans++,b--;
    }

    g = __gcd(a,b);

    if(g == 0){
    	cout << ans <<endl;
    	return;
    }

    ll lagbe = g-1;

	ll p = sqrt(g);

	ll divi = g / p;

	ll ct1 = (divi-1);

	//cout <<p<< " "<< divi <<endl;

	ct1 += (a/divi) + (b/divi);

	ll ct2 = g-1 + (a/g) + (b/g);

	ans += min(ct1,ct2);

    cout << ans <<endl;

    return;
}

int main(){
    fast;
    int testcase=1;
    cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}