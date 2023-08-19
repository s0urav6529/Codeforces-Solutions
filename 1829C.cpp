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

int m;

int cnt(int n){

	int cnt = 0;
	for(int i=0;i<30;i++){

		if(n&(1<<i)) cnt++;

	}
	return cnt;

}

map<int,int>dp;

void rec(int n){

	dp[n] = 1;

	if(cnt(n) == 1) return;

	if(dp.count(m) > 0) return;

	int half = n/2;

	if(half & 1) half++;

	int ans = -1;

	int l = half , r = n;

	while(l <= r){

		int mid = l + (r-l)/2 , m1,val = 0;

		if(mid & 1) {
			
			m1 = mid + 1;

			val = m1 + (m1/2) ;

			if(val == n){
				ans = m1;
			}
		}

		if(mid % 2 == 0) {
			m1 = mid;

			val = m1 + (m1/2) ;

			if(m1 + (m1/2) == n){
				ans = m1;
			}
		}

		if(ans != -1) break;
		if(val > n){
			r = mid - 1;
		}
		else l = mid + 1;
	}

	if(ans == -1) return;

	rec(ans);
	rec(ans/2);

}

void an1nd1ta(int tc){
    
    int n;
    cin >> n >> m;

    dp.clear();

    if(n < m){
    	 pno;
    	 return;
    }

    rec(n);

    // for(int i = 0;i<n;i++) cout << dp.count(i) <<" ";
    // cout <<endl;

    if(dp.count(m) > 0) pyes;
    else pno;

    return;
}

int main(){
    fast;
    int testcase=1;
    cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}