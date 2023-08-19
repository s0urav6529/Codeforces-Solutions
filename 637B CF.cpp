#include<bits/stdc++.h>
#include<set>
using namespace std;
set<string>s;
int main()
{
    int t;
    cin>>t;
    string a[t+1];
    for(int i=1;i<=t;i++)cin>>a[i];
    for(int i=t;i>=1;i--){if(s.count(a[i])==0)cout<<a[i]<<endl;s.insert(a[i]);}
    return 0;
}


