#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n,str="";
    cin>>n;
    str+=n;
    int len=n.size()-1;
    int i=len;
    while(i>=0)
        str+=n[i],i--;
    cout<<str<<endl;
    return 0;
}


