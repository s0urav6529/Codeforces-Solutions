#include<iostream>
using namespace std;
using ll=long long;
int main()
{
    ll t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;ll cnt=0;
        if(a==b){cout<<"0"<<endl;continue;}
        if(a<b)swap(a,b);
        while(a>b)
        {
            if(a/8>=b&&a%8==0)cnt++,a/=8;else if(a/4>=b&&a%4==0)cnt++,a/=4;else if(a/2>=b&&a%2==0)cnt++,a/=2;else {cout<<"-1"<<endl;break;}
        }
        if(a==b)cout<<cnt<<endl;
    }
    return 0;
}
