#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if((n-((k-1)*1))>0)
        {
            int l=n-((k-1)*1),p=k-1;
            if(l%2!=0){cout<<"YES"<<endl<<l<<" ";while(p--)cout<<"1"<<" ";cout<<endl;}
            else
            {
                if((n-((k-1)*2))>0)
                {
                    int l=n-((k-1)*2),p=k-1;
                    if(l%2==0){cout<<"YES"<<endl<<l<<" ";while(p--)cout<<"2"<<" ";cout<<endl;}
                    else cout<<"NO"<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
        else cout<<"NO"<<endl;

    }
    return 0;
}
