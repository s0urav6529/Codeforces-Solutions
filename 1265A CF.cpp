#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='?')
            {
                if(i==0)
                {
                    if(str[i+1]==99)
                        str[i]=97;
                    else if(str[i+1]==97)
                        str[i]=98;
                    else
                        str[i]=97;
                }
                else if(i==str.size()-1)
                {
                    if(str[i-1]==99)
                        str[i]=97;
                    else if(str[i-1]==97)
                        str[i]=98;
                    else
                        str[i]=97;
                }
                else
                {
                    if((str[i-1]==97)&&(str[i+1]=='?'||str[i+1]=='a'||str[i+1]=='b'||str[i+1]=='c'))
                    {
                        if(str[i+1]=='?')
                            str[i]=98;
                        else if(str[i+1]=='a')
                            str[i]=98;
                        else if(str[i+1]=='b')
                            str[i]=99;
                        else if(str[i+1]=='c')
                            str[i]=98;
                    }
                    else if((str[i-1]==98)&&(str[i+1]=='?'||str[i+1]=='a'||str[i+1]=='b'||str[i+1]=='c'))
                    {
                        if(str[i+1]=='?')
                            str[i]=97;
                        else if(str[i+1]=='a')
                            str[i]=99;
                        else if(str[i+1]=='b')
                            str[i]=97;
                        else if(str[i+1]=='c')
                            str[i]=97;
                    }
                    else if((str[i-1]==99)&&(str[i+1]=='?'||str[i+1]=='a'||str[i+1]=='b'||str[i+1]=='c'))
                    {
                        if(str[i+1]=='?')
                            str[i]=97;
                        else if(str[i+1]=='a')
                            str[i]=98;
                        else if(str[i+1]=='b')
                            str[i]=97;
                        else if(str[i+1]=='c')
                            str[i]=97;
                    }
                }
            }
        }
        int c=0;
        for(int i=0;i<str.size()-1;i++)
        {
            if(str[i]==str[i+1])
            {
                c=1;
                break;
            }
        }
        if(c==1)
            cout<<"-1"<<endl;
        else
        cout<<str<<endl;
    }
    return 0;
}
