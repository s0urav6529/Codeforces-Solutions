#include<iostream>
using namespace std;
int main()
{
    string str1,str2,str3;
    cin>>str1>>str2;
    if(str1==str2)
    {
        cin>>str3;
        if((str1=="paper"&&str3=="scissors")||(str1=="rock"&&str3=="paper")||(str1=="scissors"&&str3=="rock"))
        cout<<"S"<<endl;
        else
            cout<<"?"<<endl;
    }
    else if(str1=="paper"&&str2=="rock")
    {
        str1="paper";
        cin>>str3;
        if(str3=="paper"||str3=="scissors")
            cout<<"?"<<endl;
        else
            cout<<"F"<<endl;
    }
    else if(str1=="paper"&&str2=="scissors")
    {
            str2="scissors";
            cin>>str3;
            if(str3=="rock"||str3=="scissors")
                cout<<"?"<<endl;
            else
                cout<<"M"<<endl;
    }
    else if(str1=="rock"&&str2=="paper")
    {
        str2="paper";
        cin>>str3;
        if(str3=="paper"||str3=="scissors")
            cout<<"?"<<endl;
        else
            cout<<"M"<<endl;
    }
    else if(str1=="rock"&&str2=="scissors")
    {
            str1="rock";
            cin>>str3;
            if(str3=="rock"||str3=="paper")
                cout<<"?"<<endl;
            else
                cout<<"F"<<endl;
    }
    else if(str1=="scissors"&&str2=="paper")
    {
        str1="scissors";
        cin>>str3;
        if(str3=="rock"||str3=="scissors")
            cout<<"?"<<endl;
        else
            cout<<"F"<<endl;
    }
    else if(str1=="scissors"&&str2=="rock")
    {
            str2="rock";
            cin>>str3;
            if(str3=="rock"||str3=="paper")
                cout<<"?"<<endl;
            else
                cout<<"M"<<endl;
    }
    return 0;
}



