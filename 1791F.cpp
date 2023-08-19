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
const int limit=2e5+5;

int a[limit];
int st[limit << 2] , lazy[limit << 2];

void segment_tree(int node,int b,int e){

	lazy[node] = 0;

	if(b == e){
		st[node] = a[b];
		return;
	}

    int mid=(b+e)/2;

    segment_tree(node << 1, b, mid);
    segment_tree(node << 1 | 1 , mid+1, e);
}

void update(int node,int b,int e,int l,int r,int val){

	if(lazy[node] != 0){

		if(b != e){
		    lazy[node << 1] += lazy[node];
		    lazy[node << 1 | 1] += lazy[node];
		    lazy[node] = 0;
		}
	}

	if(e<l || b>r) return;

	if(b >= l && e <= r){
		if(b != e) {
		    lazy[node << 1] += val;
		    lazy[node << 1 | 1] += val;
		}
		if(b == e) lazy[node] += val;
		return;
	}

    int mid=(b+e)/2;

    update(node << 1, b, mid, l, r, val);
    update(node << 1 | 1, mid+1, e, l, r, val);

}

int query(int node,int b,int e,int id){

	if(lazy[node] != 0){

		if(b != e){
		    lazy[node << 1] += lazy[node];
		    lazy[node << 1 | 1] += lazy[node];
			lazy[node] = 0;
		}
	}

	if(b == e){

		int time = lazy[node];

		lazy[node] = 0;

		string s = to_string(st[node]);
 
		while(time>0 && s.size()>1){

			int z = st[node] , num = 0;
			time--;
			while(z){
				num += z%10;
				z /= 10;
			}

			st[node] = num;

			s = to_string(st[node]);

		}
		return st[node];
	}



	int mid = (b+e)/2;

    if(id <= mid) return query(node << 1, b, mid, id);
    else return query(node << 1 | 1 ,mid+1, e, id);

}

void an1nd1ta(int tc){
    int n , q;
    cin >> n >> q;
    
    for(int i=1;i<=n;i++) cin >> a[i];

    segment_tree(1,1,n);
	
	while(q--){

		int type;
		cin >> type;

		if(type == 1){
			int l, r;
			cin >> l >> r;
			update(1,1,n,l,r,1);
		}
		else{

			int idx;
			cin >> idx;
			cout << query(1,1,n,idx) <<endl;
		}

	}

    return;
}

int main(){
    fast;
    int testcase=1;
    cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}