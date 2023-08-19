#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int area=m*n;
        if(area%2==0)
            cout<<(area/2)<<endl;
        else
            cout<<((area/2)+1)<<endl;
    }
    return 0;
}
