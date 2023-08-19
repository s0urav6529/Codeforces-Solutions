#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back ;
#define mpr make_pair ;
#define mod 1000000007;
#define pi acos(-1.0);
#define mx INT_MIN
#define mn INT_MAX
#define ff first;
#define ss second;
#define inf 1e9
#define linf 1e18
#define eps 1e-9
#define el endl;
using namespace std;
typedef vector<int> vi;
typedef vector<long> vl;
typedef map<int,int>mi;
typedef map<long,long>ml;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<long,long>pll;
using ll=long long;
using ld=long double;
multiset<ll>A,B,C,ABC,AB,AC,BC;
///*********************************************************///

void solve()
{
    ll n,x,ans=INT_MAX;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        string s;
        cin>>x>>s;
        sort(s.begin(),s.end());
        if(s=="ABC")ABC.insert(x);
        else if(s=="A")A.insert(x);
        else if(s=="B")B.insert(x);
        else if(s=="C")C.insert(x);
        else if(s=="AB")AB.insert(x);
        else if(s=="BC")BC.insert(x);
        else if(s=="AC")AC.insert(x);
    }
    auto ia=A.begin(),ib=B.begin(),ic=C.begin(),iab=AB.begin(),iac=AC.begin(),iabc=ABC.begin(),ibc=BC.begin();

    if(ia!=A.end()&&ib!=B.end()&&ic!=C.end())ans=min(ans,(*ia+*ib+*ic));
    if(iabc!=ABC.end())ans=min(ans,*iabc);
    if(ia!=A.end()&&ibc!=BC.end())ans=min(ans,(*ia+*ibc));
    if(ib!=B.end()&&iac!=AC.end())ans=min(ans,(*iac+*ib));
    if(ic!=C.end()&&iab!=AB.end())ans=min(ans,(*ic+*iab));
    if(iab!=AB.end()&&ibc!=BC.end())ans=min(ans,(*iab+*ibc));
    if(iac!=AC.end()&&ibc!=BC.end())ans=min(ans,(*iac+*ibc));
    if(iab!=AB.end()&&iac!=AC.end())ans=min(ans,(*iab+*iac));
    if(ans==INT_MAX)cout<<"-1"<<endl;
    else cout<<ans<<endl;
    return;
}
int main()
{
    fast;
    solve();
    return 0;
}



