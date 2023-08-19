#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        for(int i=0;i<n;i++)
        {
            putwchar(i%b+97);
        }
        cout<<endl;
    }
    return 0;
}
