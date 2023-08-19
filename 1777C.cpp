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
    
    int n , m;
    cin >> n >> m;
    vector<int>a(n);
    vector<int>factors[n];

    for(int i=0;i<n;i++){
    	cin >> a[i];
    }

    sortv(a);

    for(int i=0;i<n;i++){

    	

    	for(int j=1; j*j <= a[i] && j <= m; j++){

    		if(a[i] % j == 0){

    			factors[i].pb(j);

    			if((a[i]/j != j) && (a[i]/j <= m)) {
    				factors[i].pb(a[i]/j);
    			}
    		}
    	}
    }

    vector<int>cnt(m+1,0);
    int distinct = 0 , ans = 1e6;

    for(int i=0,j=0;i<n;i++){

    	for(auto &k : factors[i]){
    		cnt[k]++;
    		if(cnt[k] == 1) distinct++; 
    	}

    	while(distinct == m){
    		
    		ans = min(ans , a[i] - a[j]);

    		for(auto &k : factors[j]){
    			cnt[k]--;
    			if(cnt[k] == 0) distinct--;
    		}
    		j++;
    	}

    }
    if(ans == 1e6) ans = -1;
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