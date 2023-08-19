#include<iostream>
#include<algorithm>
using namespace std;
int ara[100001];
int main()
{
    int n,s=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n,greater<int>());
    for(int i=1;i<n;i++)
    {
        s+=ara[0]-ara[i];
    }
    cout<<s<<endl;
    return 0;
}
