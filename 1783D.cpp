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
constexpr ll MOD=998244353;
const int limit=18e4+5;

int n;
ll dp[305][limit];
int a[305];

ll rec(int pos , int val){

	if(pos == n-1){
		return 1;
	}

	int temp = val;

	if(val < 0) temp = limit + val;

	ll &ans = dp[pos][temp];

	if(ans != -1) return ans;

	ans = 0;

	ans = rec(pos+1,a[pos+1] - val);

	/// val jodi 0 hoi tobe repeat hbe tai
	if(val) ans = (ans  + rec(pos+1,a[pos+1] + val)) % MOD;

	ans %= MOD;

	return ans;
}

void an1nd1ta(int tc){
    
	cin >> n;
	
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<limit;j++) {
			dp[i][j] = -1;
		}
	}

	cout << rec(1 , a[1]) <<endl;

    return;
}

int main(){
    fast;
    int testcase=1;
    //cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}