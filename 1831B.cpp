#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ff first
#define ss second
#define pb push_back
#define pi acos(-1.0)
//cin.get();
typedef long long int ll;
constexpr ll MOD=1e9+7;
const int limit=2e5+5;

void an1nd1ta(int tc){
    
	int n;
	cin >> n;

	int a[n+5] , b[n+5];

	map<int,int>aa,bb;

	int mx = 0 , len = 0 , bef = -1;

	for(int i=1;i<=n;i++) {
		cin >> a[i];

		if(bef != a[i]){

			if(len){
				aa[bef] = max(aa[bef],len);
			}
			len = 1;
		}
		else len ++;

		bef= a[i];

		mx = max(mx,a[i]);
	}
	if(len){
		aa[bef] = max(aa[bef],len);
	}

	bef = -1, len = 0;

	for(int i=1;i<=n;i++) {

		cin >> b[i];

		if(bef != b[i]){

			if(len){
				bb[bef] = max(bb[bef],len);
			}
			len = 1;
		}
		else len ++;

		bef= b[i];

		mx = max(mx,b[i]);
	}

	if(len){
		bb[bef] = max(bb[bef],len);
	}

	int ans = 0;
	for(int i=1;i<=mx;i++){

		ans = max(ans,aa[i]+bb[i]);
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