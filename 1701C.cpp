#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+5;

void solution(int tc){

	ll n,m;
	cin>>n>>m;
	vector<ll>cnt(n+1,0);
	for(int i=1;i<=m;i++) {
		ll x;
		cin>>x;
		cnt[x]++;
	}

	ll l=1,r=1e10,ans=1e10;

	while(l<=r){

		ll mid=l+(r-l)/2;

		ll extra=0,can=0;

		for(int i=1;i<=n;i++){


				ll left=max(0ll,mid-cnt[i]);

				can+=(left/2);

				extra+=max(0ll,(cnt[i]-mid));


		}

		if(can>=extra){
			ans=min(ans,mid);
			r=mid-1;
		}
		else l=mid+1;


	}
	cout<<ans<<endl;

}
int32_t main(){
	Faster;
	int tc = 1; 
	cin >> tc;
	for(int i = 1; i <= tc; i++){
		solution(i);
	}
    return 0;
}
