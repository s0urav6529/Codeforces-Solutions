#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    string n;
    cin>>t;
    while(t--)
    {
        int zero=0,even=0,sum=0;
        cin>>n;
        for(int i=0;i<n.size();i++)
        {
            sum+=(n[i]-'0');
            if((n[i]-'0')%2==0)
                even++;
            if((n[i]-'0')==0)
                zero++;
        }
        cout<<((sum%3==0&&zero>0&&even>1)?"red":"cyan")<<endl;
    }
    return 0;
}
