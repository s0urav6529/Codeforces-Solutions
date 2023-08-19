#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
int main()
{
    fast;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(i==0&&str[i]==str[i+1])str[i]=str[i+1]+1;
        else if(str[i]==str[i+1])
        {
            if(str[i-1]>=97&&str[i-1]<122)str[i]=str[i-1]+1;
            else if(str[i-1]==122)str[i]=str[i-1]-1;
            if(str[i]==str[i+1])
            {
                if(str[i+1]>=97&&str[i+1]<121)str[i]=str[i+1]+2;
                else if(str[i+1]>=121)str[i]=str[i+1]-2;

            }
        }
    }
    cout<<str<<endl;
    return 0;
}

