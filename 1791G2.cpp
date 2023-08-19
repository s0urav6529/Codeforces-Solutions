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
    ll c;
    cin >> n >> c;
    vector<pair<ll,ll>>a(n+1);

    a[0].first = a[0].second = 0;

    for(int i=1;i<=n;i++){
    	cin >> a[i].first;
    	a[i].second = a[i].first + i;
    	a[i].first += min(i,n+1-i);
    }

    sort(a.begin(),a.end());

    vector<ll>prefix(n+1,0);

    for(int i=1;i<=n;i++){
    	prefix[i] = a[i].first + prefix[i-1];
    }

    int ans = 0 ;

    for(int i=1;i<=n;i++){

    	int Max = 0,l = 0 , r = n;

	    ll temp_c = c - a[i].second;

	    while(l <= r){

	    	int mid = l + (r-l)/2;

	    	ll sum = prefix[mid];

	    	int nichi = 1 + mid;

	    	if(i <= mid){

	    		sum -= a[i].first;

	    		nichi--;

	    	}

	    	if(sum <= temp_c){
	    		Max = max(Max , nichi);
	    		l = mid + 1;
	    	}
	    	else r = mid - 1;
	    }

	    ans = max(ans , Max);

    }

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