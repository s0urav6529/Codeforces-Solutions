#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define sz(x) int((x).size())
#define rep0(i,k) for (int i=0 ; i<k ; i++)
#define rep(i,k)  for (int i=1 ; i<=k ; i++)
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define min3(a,b,c)  min(a, min(b,c))
#define pyes         cout<<"Yes"<<endl
#define pno          cout<<"No"<<endl
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mpr make_pair
#define pi acos(-1.0)
//cin.get();
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
constexpr ll imax=1e9;
constexpr ll imin=-1e9;
constexpr ll MOD=1e9+7;
const int limit=100005;


void solution(){

    string s,p;
    cin>>s;
    vector<int>cnt(26,0);
    vector<int>pos(26,0);
    for(int i=s.size()-1;i>=0;i--){
        if(cnt[s[i]-'a']==0) p+=s[i];
        cnt[s[i]-'a']++;
    }
    rev(p);
    for(int i=0;i<p.size();i++){
        pos[p[i]-'a']=i+1;
    }
    int len=0;
    for(int i=0;i<26;i++){
        if(cnt[i]){
            //cout<<cnt[i]<<" "<<pos[i]<<endl;
            if(cnt[i]%pos[i]==0){
                len+=(cnt[i]/pos[i]);
            }
            else {
                cout<<-1<<endl;
                return;
            }
        }
    }
    string ans=s.substr(0,len);
    string temp=ans;
    int j=0;
    while(j<p.size()){

        for(int i=0;i<temp.size();i++){
            if(temp[i]=='?' || temp[i]==p[j]) temp[i]='?';
            else ans+=temp[i];
        }
        j++;
    }
    if(ans==s) cout<<ans.substr(0,len)<<" "<<p<<endl;
    else cout<<-1<<endl;
    return;
}
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    cin>>tc;
    while(tc--) solution();
    return 0;
}


