#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define min3(a,b,c)  min(a, min(b,c))
#define pyes         cout<<"Yes"<<endl
#define pno          cout<<"No"<<endl
#define pf(a)        cout<<a<<endl
#define p2f(a,b)     cout<<a<<" "<<b<<endl
#define p3f(a,b,c)  cout<<a<<" "<<b<<" "<<c<<endl
#define p4f(a,b,c)  cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl
#define ff first
#define ss second
#define pb push_back
#define pi acos(-1.0)
//cin.get();
typedef long long int ll;
typedef unsigned long long int llu;
//constexpr llu Mx=18446744073709551615;
constexpr ll MOD=998244353;
const int limit=2e5+5;

void run_case(){
    ll q;
    cin >> q;

    vector<ll>s_cnt(26,0),t_cnt(26,0);

    s_cnt[0]=1;
    t_cnt[0]=1;

    while(q--){

        ll d,k;
        string x;
        cin >> d >> k >> x;

        vector<ll>temp(30,0);
        for(int i=0;i<x.size();i++){
            temp[x[i]-'a']++;
        }

        if(d==1){
            ///s
            for(int i=0;i<26;i++){
                s_cnt[i]+=(k*temp[i]);
            }
        }
        else {
            ///t
            for(int i=0;i<26;i++){
                t_cnt[i]+=(k*temp[i]);
            }
        }

        char s_max='a',t_max='a';
        ll s_len=0,t_len=0;

        for(int i=0;i<26;i++){
            s_len+=s_cnt[i];
            if(s_cnt[i]) s_max = max(s_max , (char)(i+'a'));
        }

        for(int i=0;i<26;i++){
            t_len+=t_cnt[i];
            if(t_cnt[i]) t_max = max(t_max , (char)(i+'a'));
        }

        if(t_max > 'a') pyes;
        else if(s_max > t_max) pno;
        else if(s_len < t_len) pyes;
        else pno;

    }

    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}

