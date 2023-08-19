#include<bits/stdc++.h>
using namespace std;
vector<int>v1;
vector<int>v2;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int n,x,maxi;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v1.push_back(x);
    }
    for(int i=0;i<v1.size();i++)
    {
        for(int j=i+1;j<v1.size();j++)
        {
            int a=v1[i],b=v1[j];
            if(a<b)
            {
                a=v1[j];
                b=v1[i];
            }
            int g=gcd(a,b);
            int l=(a/g)*b;
            v2.push_back(l);
            cout<<l<<" ";
        }
    }
    maxi=v2[0];
    for(int i=0;i<v2.size();i++)
    {
        for(int j=i+1;j<v2.size();j++)
        {
            int a=v2[i],b=v2[j];
            if(a<b)
            {
                a=v2[j];
                b=v2[i];
            }
            int g=gcd(a,b);
            if(maxi>g)
                maxi=g;
        }
    }
    cout<<maxi<<endl;
    maxi=0;
    v1.clear();
    v2.clear();

    return 0;
}

