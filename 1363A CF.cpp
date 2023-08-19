#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t,p,n,x;cin>>t;
    while(t--)
    {
        int even=0,odd=0;
        cin>>n>>x;
        for(int i=1;i<=n;i++){cin>>p;if(p%2==0) even++;else odd++;}
        if(odd>=1)
        {
            odd=min(odd,x);
            if(odd%2!=0&&(odd+even)>=x)cout<<"YES"<<endl;
            else if(odd%2==0&&((odd-1)+even)>=x)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
