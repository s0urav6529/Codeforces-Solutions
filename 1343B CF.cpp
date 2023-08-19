#include<iostream>
#include<vector>
using namespace std;
using ll=long long;
vector<int>evac;
vector<int>ovac;
int main()
{
    int t,n;
    ll esum=0,osum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(ll i=2,k=1;k<=(n/2);i+=2,k++)
        {
            esum+=i;
            evac.push_back(i);
        }
        for(ll i=1,k=1;k<=(n/2);i+=2)
        {
            osum+=i;
            if(osum<esum)
            {
                ovac.push_back(i);
                if(k==(n/2))
                {
                    ovac.erase(ovac.begin()+(k-1));
                    osum-=i;
                    k--;
                }
                k++;
            }
            else if(osum>esum&&k==(n/2))
                break;
            else if(osum==esum)
            {
                ovac.push_back(i);
                if(k==(n/2))
                    break;
            }
        }
        if((esum%2==0&&osum%2==0))
        {
            cout<<"YES"<<endl;
            vector<int>::iterator eit=evac.begin();
            while(eit!=evac.end())
            {
                cout<<*eit<<" ";
                eit++;
            }
            vector<int>::iterator oit=ovac.begin();
            while(oit!=ovac.end())
            {
                cout<<*oit<<" ";
                oit++;
            }
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;
        osum=0;
        esum=0;
        ovac.clear();
        evac.clear();

    }
    return 0;
}
