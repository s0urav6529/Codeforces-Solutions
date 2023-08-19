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
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
constexpr ll imax=1e9;
constexpr ll imin=-1e9;
constexpr ll MOD=1e9+7;
const int limit=100001;


string s,p;

void setvalue(char w,char l){

    p="";
    for(int i=0;i<s.size();i++){

        if(s[i]=='?'){

            if(i&1) p+=l;
            else p+=w;
        }
        else p+=s[i];
    }
}

int answer(){

    int tot_goal_a=0,tot_goal_b=0;
    for(int i=0;i<p.size();i++){
        if(i&1 && p[i]=='1') tot_goal_b++;
        if(i%2==0 && p[i]=='1') tot_goal_a++;
    }

    int goal_A=0,goal_B=0;

    for(int i=0;i<p.size();i++){

        if(i%2==0){
            if(p[i]=='1') goal_A++,tot_goal_a--;

            if(goal_A>goal_B+tot_goal_b) {
                return i+1;
            }
        }
        if(i&1){
            if(p[i]=='1') goal_B++,tot_goal_b--;

            if(goal_B>goal_A+tot_goal_a) {
                return i+1;
            }
        }
    }
    return 10;

}

void solution(){

    int ans=10;
    cin>>s;
    setvalue('1','0');
    ans=min(ans,answer());
    setvalue('0','1');
    ans=min(ans,answer());
    cout<<ans<<endl;
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



