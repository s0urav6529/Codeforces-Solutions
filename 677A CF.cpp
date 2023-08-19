#include<iostream>
using namespace std;
int main()
{

    int n,f,x,s=0;
    cin>>n>>f;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>f)
            s+=2;
        else
            s++;
    }
    cout<<s<<endl;
    return 0;
}


