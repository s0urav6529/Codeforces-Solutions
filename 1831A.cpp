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

	int a[n+5];
	for(int i=1;i<=n;i++) cin >> a[i];

	for(int i=1;i<=n;i++){

		cout << (n+1)-a[i] <<" ";

	}
	cout << endl;
    


    return;
}

int main(){
    fast;
    int testcase=1;
    cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}