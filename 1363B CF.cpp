#include<bits/stdc++.h>
using namespace std;
int ara[10005];
int main()
{
    int t;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        int cnt=0;
        int len=str.size()-1;
        for(int i=0;i<=len;i++)
        {
            if(i>=1&&str[i]=='0'&&str[i-1]=='1'&&str[i+1]=='1'&&i!=len)cnt++;
            if(i>=1&&str[i]=='1'&&str[i-1]=='0'&&str[i+1]=='0'&&i!=len)cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

