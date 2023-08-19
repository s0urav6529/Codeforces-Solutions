#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n,m;
    cin>>n>>m;
    if(m>n)
        cout<<fact(n)<<endl;
    else
        cout<<fact(m)<<endl;
    return 0;
}
int fact(int p)
{
    if(p==0||p==1)
        return 1;
    else
        return p*fact(p-1);
}
