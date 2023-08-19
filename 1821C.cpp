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
    
    string s;
    
    cin >> s;
    
    int n = s.size();

    vector<int>ch[26];

    for(int i=0;i<n;i++){

        int index = (int) (s[i]-'a');

        if(ch[index].size() == 0) {
            ch[index].pb(0);
        }

        ch[index].pb(i+1);

    }

    for(int i=0;i<26;i++) {

        if(ch[i].size() > 0 ) ch[i].pb(n+1);
    }

    int ans = n;

    for(int i=0;i<26;i++){

        if(ch[i].size() > 0){

            int temp = 0 , sz = ch[i].size();

            for(int  j = 1;j<sz;j++){

                int ache = max(0,(ch[i][j] - ch[i][j-1])-1);

                //cout <<(char)(i+'a')<<" "<< ch[i][j-1]<<" "<<ch[i][j]<<" "<<ache <<endl;

                int tot = 0;

                while(ache > 0){
                    ache /=2;
                    tot ++;
                }
                temp = max(temp , tot);

            }

            //cout << (char)(i+'a') <<" "<< temp << endl;

            ans = min(ans , temp);

        }

    }

    cout << ans << endl;

    return;
}

int main(){
    fast;
    int testcase=1;
    cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}