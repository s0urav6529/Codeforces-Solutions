#include<bits/stdc++.h>
using namespace std;
int ara[4];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    int ans=1,cnt=0;
    while(ans)
    {
        for(int i=0;i<n;i++)
        {
            if(ara[i]<=ans)
            {
                cnt++;
            }
            else
            {
                if(cnt<k)
                    ans++;
            }
            if(cnt>k)
            {
                break;
            }
        }
    }
    if(ans)
    cout<<ans<<endl;
    return 0;
}

