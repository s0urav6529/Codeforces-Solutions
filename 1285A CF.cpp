#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,len=0;
    cin>>n;
    char name[n];
    cin>>name;
    len=strlen(name);
    cout<<len+1<<endl;
    return 0;
}
