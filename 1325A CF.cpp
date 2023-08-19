#include<iostream>
using namespace std;
using ll=long long;
int main()
{
    ll tc,x;
    cin>>tc;
    while(tc--)
    {
        cin>>x;
        if(x>2){
            cout<<"1"<<" "<<x-1<<endl;
        }
        else
            cout<<"1"<<" "<<"1"<<endl;
    }
    return 0;
}

