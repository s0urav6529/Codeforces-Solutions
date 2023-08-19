#include<bits/stdc++.h>
using namespace std;
set<int>s;
int cnt=0;
void twopointer(string str,int l)
{
    int i=0,j=l;
    while(i<j){
    if(str[i]=='('&&str[j]==')')
    {
        cnt+=2;
        s.insert(i+1);
        s.insert(j+1);
        i++;j--;
    }
    else if( str[i]=='('&&str[j]=='(')
        j--;
    else
        i++;
    }

}
int main()
{
    string str;
    cin>>str;
    int len=str.size()-1;
    twopointer(str,len);
    if(cnt==0)
        cout<<"0"<<endl;
    else
    {
        cout<<"1"<<endl;
        cout<<cnt<<endl;
        set<int>::iterator it=s.begin();
        while(it!=s.end())
        {
            cout<<*it<<" ";
            it++;
        }
    }
    return 0;
}
