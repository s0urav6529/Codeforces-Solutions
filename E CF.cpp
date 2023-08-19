#include<iostream>
#include<algorithm>
using  namespace std;
long long int aara[100002];
int bin_search(int,int,long long);
int main()
{
    int n,q,t;
    long long val;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>aara[i];
    }
    sort(aara+1,aara+n+1);
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        cin>>val;
        t=bin_search(1,n,val);
        cout<<t<<endl;
    }
    return 0;
}
int bin_search(int l,int h,long long val)
{
    int mid,count=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(aara[mid]==val)
        {
            count=mid;
            l=mid+1;
        }
        else if(aara[mid]<val)
        {
            count=mid;
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    return count;
}
