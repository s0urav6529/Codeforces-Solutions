#include<iostream>
#include<set>
using namespace std;
int main()
{
    int t,counter=0,n,in;
    cin>>t;
    while(t--)
    {
        set<int>s;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>in;
            s.insert(in);
        }
        set<int>::iterator it=s.begin();
        while(it!=s.end())
        {
            counter++;
            it++;
        }
        cout<<counter<<endl;
        counter=0;

    }
}

