
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
#define setprecision(y,x)     cout<<fixed<<setprecision(y)<<x<<endl   ///kotoghor , value
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
typedef long double ld;
typedef unsigned long long int llu;
//constexpr llu Mx=18446744073709551615;
constexpr ll MOD=998244353;
const int limit=2e5+5;

void run_case(){

    int n;
    cin>>n;

    vector<string>a(n),b(n),c(n);
    map<string,bool> ma,mb,mc;

    for(int i=1;i<=3;i++){

        for(int j=0;j<n;j++){

            string s; cin>>s;

            if(i==1) a[j]=s,ma[s]=true;

            else if(i==2) b[j]=s,mb[s]=true;

            else c[j]=s,mc[s]=true;

        }

    }

    int aa=0,bb=0,cc=0;

    for(int i=1;i<=3;i++){

        for(int j=0;j<n;j++){
            string s;
            if(i==1) {
                s=a[j];

                int cnt=1;

                if(mb.find(s)!=mb.end()) cnt--;

                if(mc.find(s)!=mc.end()) cnt--;

                if(cnt==0) aa++;
                else if(cnt==1) aa+=3;


            }
            else if(i==2) {
                s=b[j];

                int cnt=1;

                if(ma.find(s)!=ma.end()) cnt--;

                if(mc.find(s)!=mc.end()) cnt--;

                if(cnt==0) bb++;
                else if(cnt==1) bb+=3;

            }
            else {
                s=c[j];

                int cnt=1;

                if(mb.find(s)!=mb.end()) cnt--;

                if(ma.find(s)!=ma.end()) cnt--;

                if(cnt==0) cc++;
                else if(cnt==1) cc+=3;

            }

        }

    }
    cout<<aa<<" "<<bb<<" "<<cc<<endl;


    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}
