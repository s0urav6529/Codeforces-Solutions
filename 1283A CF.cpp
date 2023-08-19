#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{

    int tc,hr,min;
    cin>>tc;
    while(tc--)
    {
        cin>>hr>>min;
        hr=23-hr;
        min=60-min;
        cout<<(hr*60)+min<<endl;
    }
    return 0;
}


