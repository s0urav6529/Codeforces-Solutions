
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define mod 1000000007
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    cin>>tc;
    for(int z=1;z<=tc;z++)
    {
        int x,y,p_y=0,p_x=0,n_x=0,n_y=0,flag=1;
        string s;
        cin>>x>>y>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='U') p_y++;
            else if(s[i]=='R') p_x++;
            else if(s[i]=='D') n_y++;
            else n_x++;
        }
        if(x<0 && n_x<abs(x)) flag=0;
        else if(x>0 && p_x<abs(x)) flag=0;
        else if(y<0 && n_y<abs(y)) flag=0;
        else if(y>0 && p_y<abs(y)) flag=0;
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}


