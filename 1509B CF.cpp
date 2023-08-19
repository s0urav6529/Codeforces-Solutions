#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define mod 1000000007
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);

void solution()
{
    string s;
    int n;
    cin>>n>>s;
    set<int>m,t;
    int cntt=0,cntm=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='M')m.insert(i),cntm++;
        else t.insert(i),cntt++;

    }
    if(cntt&1 || (cntt/2!=cntm))
    {
        cout<<"NO"<<endl;
        return;
    }
    //cout<<t.size()<<" "<<m.size()<<endl;
    set<int>ss;
    while(m.size()>0)
    {
        int e=*t.rbegin();
        t.erase(*t.rbegin());
        int x=*m.rbegin();
        m.erase(*m.rbegin());
        if(x<e)
        {
            ss.insert(x);
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    while(ss.size()>0)
    {
        int x=*ss.begin();
        ss.erase(*ss.begin());
        int b=*t.begin();
        t.erase(*t.begin());
        //cout<<x<<" "<<b<<endl;
        if(b<x) continue;
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
}
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    cin>>tc;
//    for(int z=1;z<=tc;z++)
//    {
//        cout<<"Case #"<<z<<": "<<<<endl;
//    }
    while(tc--) solution();
    return 0;
}






