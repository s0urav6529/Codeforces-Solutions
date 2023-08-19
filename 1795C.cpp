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

// AC code-1
// void an1nd1ta(int tc){
//     int n;
//     cin >> n;
//     ll a[n+5] , b[n+5];
//     for(int i=1;i<=n;i++) cin >> a[i];
//     for(int i=1;i<=n;i++) cin >> b[i];


//     priority_queue<ll,vector<ll>,greater<ll>>s;

// 	vector<ll>ans(n+1,0);
	
// 	ll sum = 0;
// 	for(int i=1;i<=n;i++){
		
// 		ans[i] = 0;

// 		while(s.size() > 0 && s.top() <= sum){
// 			s.pop();
// 		}

// 		s.push(a[i] + sum);

// 		while(s.size() > 0 && (s.top() <= b[i]+sum)){
// 			ans[i] += max(0ll,(s.top()-sum));
// 			s.pop();
// 		}

// 		ll k = (ll)s.size();

// 		ans[i] += ( k * b[i]);

// 		sum += b[i];

// 	}


// 	for(int i=1;i<=n;i++) cout << ans[i] <<" ";
// 	cout << endl;

//     return;
// }


// AC code - 2

void an1nd1ta(int tc){
	int n;
    cin >> n;
    ll a[n+5] , b[n+5] , prefix_b[n+5] ,fre[n+5], ans[n+5];

    prefix_b[0] = ans[0] = 0 , fre[0] = 0;

    for(int i=1;i<=n;i++) cin >> a[i];

    for(int i=1;i<=n;i++) {
    	cin >> b[i];
    	prefix_b[i] = prefix_b[i-1] + b[i];
    	ans[i] = 0;
    	fre[i] = 0;
    }

    for(int i=1;i<=n;i++){

    	int idx = upper_bound(prefix_b+1,prefix_b+n+1,prefix_b[i-1] + a[i]) - prefix_b;
    	
    	fre[i] ++;
    	if(idx <=n) fre[idx] --;

    	ll rem = a[i] - (prefix_b[idx-1] - prefix_b[i-1]);

    	if(idx <= n) ans[idx] += rem;
    	if(idx+1 <= n) ans[idx+1] -= rem;

    }

    for(int i=1;i<=n;i++){
    	fre[i] += fre[i-1];
    }

    for(int i=1;i<=n;i++){
    	ans[i] += ans[i-1];
    }

    for(int i=1;i<=n;i++){
    	ans[i] += (fre[i] * b[i]);
    	cout << ans[i] <<" ";
    }
    cout << endl;

}

int main(){
    fast;
    int testcase=1;
    cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}