#include<iostream>
#include<math.h>
using namespace std;
using ll=long long;
int main()
{
    ll n;
    cin>>n;
    if(n>=1&&n!=2)
        cout<<(n-(n-1))<<endl;
    else
        cout<<n<<endl;
    return 0;
}

