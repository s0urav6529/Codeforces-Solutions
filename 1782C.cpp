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
    	
    int n ;
   	string s;
   	cin >> n >> s;

   	vector<int>cnt(26,0);

   	for(int i=0;i<n;i++){

   		cnt[s[i]-'a']++;
   	}

   	vector<pair<int,char>>charocc;

   	for(int i=0;i<26;i++){
   		char ch = i + 'a';
   		charocc.pb({cnt[i],ch});
   	}
   	sort(charocc.begin(),charocc.end());
   	reverse(charocc.begin(),charocc.end());

   	// for(int i=0;i<charocc.size();i++){
   	// 	cout<<charocc[i].second<<" "<<charocc[i].first<<endl;
   	// }
   	// cout<<endl;

   	int m = charocc.size();
   	string t = s;
   	int change = n;

   	for(int j=1;j<=26;j++){

   		if(n%j == 0){

   			int lagbe = n / j;
   			vector<int>change_later;

   			map<char,int>use_korbo , sub_korbo;

   			for(int i=0;i<j;i++) {
   				
   				use_korbo[charocc[i].second] = min(lagbe,charocc[i].first);

   				sub_korbo[charocc[i].second] = lagbe-min(lagbe,charocc[i].first);
   			}

   			string temp_t = s;
   			int temp_change = 0;

   			for(int i=0;i<n;i++){

   				if(use_korbo[s[i]] > 0){
   					use_korbo[s[i]]--;
   				}
   				else{
   					temp_change++;
   					change_later.pb(i);
   				}
   			}
   			if(temp_change < change){
	   			
	   			int j =  0 , k = change_later.size();
	   			for(auto i : sub_korbo){
	   				int val = i.second;
	   				char c = i.first;
	   				for(;j<k && val>0;j++){
	   					temp_t[change_later[j]] = c;
	   					val--;
	   				} 
	   			}

	   			t = temp_t;
	   			change = temp_change;
   			}
   		}

   	}
   	cout<< change <<endl << t <<endl;

    return;
}

int main(){
    fast;
    int testcase=1;
    cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}