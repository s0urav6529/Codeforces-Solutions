#include<bits/stdc++.h>
using namespace std;
int ara[5];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    string n;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<3;i++)cin>>ara[i];sort(ara,ara+3);if(ara[2]<=ara[1]+ara[0])cout<<(ara[2]+ara[1]+ara[0])/2<<endl;else cout<<ara[0]+ara[1]<<endl;
    }
    return 0;
}

