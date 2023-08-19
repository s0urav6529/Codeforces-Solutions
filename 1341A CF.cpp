#include<bits/stdc++.h>
using namespace std;
int ara[10002];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,a,b,c,d,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c>>d;
        cout<<(((((a-b)*n)>(c+d))||(((a+b)*n)<(c-d)))?"NO":"YES")<<endl;
    }
    return 0;
}
