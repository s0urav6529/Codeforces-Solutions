#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int ac=n;
        while(k--)
        {
            if(n%2==0){n=n/2;n+=ac;}
            else n+=ac;
        }
        cout<<n<<endl;
    }
    return 0;
}
