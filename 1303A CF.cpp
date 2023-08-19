#include<iostream>
using namespace std;

int main()
{
    int t,cnt=0,l=-1,r=-1;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        for(int j=0,k=s.size()-1;;j++,k--)
        {
            if(s[j]=='1'&& l==-1)
                l=j;
            if(s[k]=='1'&& r==-1)
                r=k;
            if((l>-1&&r>-1)||j>=k)
                break;
        }
        if(l>-1&&r>-1)
        {
            for(int j=l+1;j<r;j++)
            {
                if(s[j]=='0')
                    cnt++;
            }
            cout<<cnt<<endl;
        }
        else
            cout<<cnt<<endl;
        l=-1;cnt=0;r=-1;
    }
    return 0;
}
