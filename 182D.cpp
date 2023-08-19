#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define mod 1000000007
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);

bool isdivisor(string p,string q){

    if(p.size()%q.size()!=0)
        return false;

    for(int i=0;i<p.size();i+=q.size()){

        if(p.substr(i,q.size())!=q)
            return false;
    }
    return true;
}
void solution()
{
    string a,b;
    cin>>a>>b;
    int la=a.size();
    int lb=b.size();

    set<string> div;
    for(int i=1;i*i<=la;i++){

        if(la%i==0){

            string x=a.substr(0,i);
            string y=a.substr(0,la/i);

            if(isdivisor(a,x)){
                div.insert(x);
            }
            if(isdivisor(a,y)){
                div.insert(y);
            }
        }
    }
    int ans=0;

    for(string s:div){

        if(isdivisor(b,s)){
            ans++;
        }
    }
    cout<<ans<<endl;
    return;
}
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    //cin>>tc;
    while(tc--) solution();
    return 0;
}








