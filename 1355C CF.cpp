#include<iostream>
#include<set>
using namespace std;
long long cnt=0;
int a,b,c,d;
void twopointer(int key)
{
    int i=a,j=b;
    while(i<=b)
    {
        if(i+j>key)
        {
           cnt++;
           j++;
        }
        else if(i+j<key)
            j++;
        else
            j++;
        if(j>c)
        {
           i++;
           j=b;
        }
    }
}
int main()
{
    cin>>a>>b>>c>>d;
    for(int k=c;k<=d;k++)
        twopointer(k);
    cout<<cnt<<endl;
    return 0;
}
