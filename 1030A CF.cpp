#include<iostream>
using namespace std;
int main()
{
    int n,h=0,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp==1)
            h=1;
    }
    if(h==1)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
    return 0;
}
