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
const int limit=5e4+5;

vector<int>adj[limit];

void an1nd1ta(int tc){
    int m , n;
    cin >> m;

    int ans[m+4];
    map<int,int>mp;


    for(int i=1;i<=m;i++){

    	cin >> n;

    	adj[i].clear();

    	for(int j=1;j<=n;j++){

    		int x;
    		cin >> x;
    		mp[x]++;

    		adj[i].pb(x);


    	}

    }
    bool ok;
    for(int i=1;i<=m;i++){

    	ok = false;

		for(int ch : adj[i]){

			//cout << i <<" "<<ch <<" "<<mp[ch]<<endl;

			if(mp[ch] == 1){
				ans[i] = ch;
				ok = true;
			}
			mp[ch] --;


		}
		
    
    	if(ok == false){

    		cout << -1 <<endl;
    		return;
    	}

    }

    for(int i=1;i<=m;i++) cout << ans[i]<<" ";
    cout <<endl;

    return;
}

int main(){
    fast;
    int testcase=1;
    cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}