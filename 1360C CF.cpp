#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t,n,x;
    cin>>t;
    while(t--)
    {
        int ev=0,od=0,j=0,k=0;cin>>n;
        int ea[n+1];int oa[n+1];
        for(int i=1;i<=n;i++){cin>>x;if(x%2==0){ev++;ea[j++]=x;}else{od++;oa[k++]=x;}}
        if(ev%2==0&&od%2==0)
            cout<<"YES"<<endl;
        else{
            int c=0;
            for(int i=0;i<k;i++)
            {
                for(int l=0;l<j;l++){if(abs(oa[i]-ea[l])==1){c=1;break;}}
            }
            if(c==1)cout<<"YES"<<endl; else cout<<"NO"<<endl;
        }
    }
    return 0;
}
