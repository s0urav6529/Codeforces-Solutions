#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        if(m==0)
            cout<<"0"<<endl;
        else
        {
            int per=n/k;
            int rest=m-per;
            if(rest<=0)
                cout<<m<<endl;
            else
            {
                --k;if(rest<=k)cout<<per-1<<endl;
                else
                {
                    if(rest%k==0)cout<<per-(rest/k)<<endl;
                    else cout<<per-((rest/k)+1)<<endl;
                }
            }

        }
    }
}
