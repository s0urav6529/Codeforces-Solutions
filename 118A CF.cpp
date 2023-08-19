#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str2="";
    cin>>str;
    int len=str.size()-1;
    int i=0;
    while(i<=len)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'||str[i]=='y'||str[i]=='Y')
        {
            i++;
            continue;
        }
        else
        {
            str2+=".";
            if(str[i]<97)
                str2+=(str[i]+32);
            else
                str2+=str[i];

        }
        i++;
    }
    cout<<str2<<endl;
    return 0;
}
