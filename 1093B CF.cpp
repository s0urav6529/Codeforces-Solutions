#include<iostream>
#include<string.h>
using namespace std;
int main()
{

    int t,cnt=0,len;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        len=str.size()-1;
        for(int i=0,j=len;i<j;i++,j--)
        {
            if(str[i]!=str[j])
            {
                cnt=1;
                break;
            }
        }
        if(cnt==1)
        {
            cout<<str<<endl;
        }
        else
        {
            int i=0;
            while(i<len)
            {
                char temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
                for(int k=0,j=len;i<j;k++,j--)
                {
                    if(str[k]!=str[j])
                    {
                        cnt=1;
                        break;
                    }
                }
                if(cnt==1)
                  {
                        cout<<str<<endl;
                        break;
                  }
                else
                    i++;
            }
            if(cnt==0)
                cout<<"-1"<<endl;

        }
        cnt=0;
    }
    return 0;
}



