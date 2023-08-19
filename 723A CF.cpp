#include<iostream>
#include<algorithm>
int ara[1001];
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    int s=0;
    for(int i=0;i<3;i++)
        cin>>ara[i];
    sort(ara,ara+3);
    s+=(ara[1]-ara[0])+(ara[2]-ara[1]);
    cout<<s<<endl;
    return 0;
}

