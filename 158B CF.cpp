#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,one=0,two=0,three=0,four=0,x;
    cin>>n;
    for(int i=0;i<n;i++) {cin>>x; if(x==1) one++; else if(x==2) two++; else if(x==3) three++; else four++;}
    one=one-three; one=max(0,one);
    if(two%2==0)
    {
        two/=2;
        if(one%4==0) one=((one/4));
        else one=((one/4)+1);
        four+=three+two+one;
    }
    else
    {
        two=(two/2);
        if((2+one)%4==0) two+=((2+one)/4);
        else two+=(((2+one)/4)+1);
        four+=three+two;
    }
    cout<<four<<endl;
    return 0;
}

