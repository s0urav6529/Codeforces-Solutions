#include<iostream>
using namespace std;
int main()
{
    int n,m,c,mi=0,ci=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m>>c;
        if(m>c)
            mi++;
        else if(m<c)
            ci++;

    }
    if(mi>ci)
        cout<<"Mishka"<<endl;
    else if(mi<ci)
        cout<<"Chris"<<endl;
    else
    cout<<"Friendship is magic!^^"<<endl;
    return 0;
}

