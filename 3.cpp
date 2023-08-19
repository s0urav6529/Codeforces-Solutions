#include<iostream>
using namespace std;
int ara[200];
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        int cnt=0;
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        int key=1,i=0;
        while(x>0)
        {
            if(key==ara[i])
            {
                key++;
                cnt++;
                i++;
                continue;
            }
            else
            {
                x--;
                key++;
                cnt++;
            }

        }
        if(++key=ara[++i])
            cout<<++cnt<<endl;
        else
            cout<<cnt<<endl;

    }
    return 0;
}
