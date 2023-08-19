#include<iostream>
#include<vector>
using namespace std;
vector<int>v;
int main()
{
    int t,n,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n>=10)
        {
            if(n>=1000)
            {
                p=n/1000;
                v.push_back(p*1000);
                n=n%1000;
            }
            else if(n>=100)
            {
                p=n/100;
                v.push_back(p*100);
                n=n%100;
            }
            else if(n>=10)
            {
                p=n/10;
                v.push_back(p*10);
                n=n%10;
            }

        }
        if(n!=0)
            v.push_back(n);
        int x=v.size();
        cout<<x<<endl;
        vector<int>::iterator it=v.begin();
        while(it!=v.end())
        {
            cout<<*it<<" ";it++;
        }
        cout<<endl;
        v.clear();
    }
    return 0;
}


