#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(n%m==0)cout<<min(n*a,(n/m)*b)<<endl;
    else
    {
        int MIN;
        if(n<m)MIN=b;
        else MIN=min((((n/m)*b)+((n%m)*a)),((n/m)+1)*b);
        cout<<min(n*a,MIN)<<endl;
    }

    return 0;
}
