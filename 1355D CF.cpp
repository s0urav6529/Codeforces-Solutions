#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,s;
    cin>>n>>s;
    int sl=(n-1)*2;
    if(s-sl<2)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=1;i<=n-1;i++)
            cout<<"2"<<" ";
        cout<<s-sl<<endl;
        cout<<"1"<<endl;
    }
    return 0;
}


