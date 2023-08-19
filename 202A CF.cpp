#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
string s;
int main()
{
    cin>>s;
    sort(s.begin(),s.end());
    ll right=s.length()-1;
    auto it=lower_bound(s.begin(),s.end(),s[right]);
    while(it!=s.end())
    {
        cout<<*it;it++;
    }
    cout<<endl;
    return 0;
}
