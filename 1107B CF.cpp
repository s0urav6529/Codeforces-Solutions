#include<iostream>
long long finddigit(long long,long long);
using namespace std;
int main()
{
    int tc;
    long long k,x;
    cin>>tc;
    while(tc--)
    {
        cin>>k>>x;
        cout<<finddigit(k,x)<<endl;
    }
    return 0;
}
long long finddigit(long long k,long long x)
{
    return (k-1)*9+x;
}

