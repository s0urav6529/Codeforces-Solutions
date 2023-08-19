#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int n,k,cnt=0;
    cin>>n>>k;
    for(int i=2;;i++)
    {
        while(n%i==0)
        {
            cnt++;
            if(cnt==k)
            {
                v.push_back(n);
                break;
            }
            n=n/i;
            v.push_back(i);
        }
        if(cnt==k)
            break;
        else if(n==1)
            break;
    }
    if(cnt==k)
    {
        vector<int>::iterator it=v.begin();
        while(it!=v.end())
        {
            cout<<*it<<" ";
            it++;
        }
        cout<<endl;
    }
    else
        cout<<"-1"<<endl;
    return 0;
}


