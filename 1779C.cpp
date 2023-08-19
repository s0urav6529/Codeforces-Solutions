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
constexpr ll MOD=1e9+7;
const int limit=5e3+5;

void an1nd1ta(int tc){
    
    int n , m;
    cin >> n >> m;

    ll a[n+5] , prefix[n+5];
    prefix[0] = 0;
    
    ll minPsum = 1e18;

    for(int i=1;i<=n;i++) {

    	cin >> a[i];
    	prefix[i] = prefix[i-1] + a[i];

    	minPsum = min(minPsum , prefix[i]);
    
    }

    if(minPsum == prefix[m]){

    	cout<< 0 <<endl;
    	return;

    }

    ll ans = 0; 

    minPsum = prefix[m];

    priority_queue<pair<ll,int>>maxheap;

    maxheap.push({a[m],m});

    for(int i=m-1;i>=1;i--){

    	while(maxheap.size() > 0 && prefix[i] < minPsum){

    		ans++;

    		ll mx = maxheap.top().first;
    		int idx = maxheap.top().second;
			maxheap.pop();

    		minPsum -= a[idx];

    		if(mx <= 0) a[idx] = abs(mx);
    		else a[idx] = -mx;

    		minPsum +=  a[idx];

    		//cout <<idx<<" ";

    	}

    	maxheap.push({a[i],i});

    }

    minPsum = 1e18;

    for(int i=1;i<=n;i++) {

    	prefix[i] = prefix[i-1] + a[i];

    	minPsum = min(minPsum , prefix[i]);
    
    }

   
    if(minPsum == prefix[m]){
    	cout<< ans <<endl;
    	return;

    }

    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> minheap;


    for(int i=m+1;i<=n;i++){

    	minheap.push({a[i],i});

    	bool ok= false;
    	while(minheap.size() > 0 && prefix[i] < prefix[m]){

    		ans ++;

    		ll mn = minheap.top().first;
    		int idx = minheap.top().second;
    		minheap.pop();

    		prefix[i] -= a[idx];

    		if(mn <= 0) a[idx] = abs(mn);
    		else a[idx] = -mn;

    		prefix[i] += a[idx];
    	}

    	prefix[i+1] = prefix[i] + a[i+1];


    }

    cout<<ans<<endl;



    return;
}

int main(){
    fast;
    int testcase=1;
    cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}