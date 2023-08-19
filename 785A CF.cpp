#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    string str;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>str;
        if(str=="Icosahedron")
        {
            sum+=20;
        }
        else if(str=="Cube")
        {
            sum+=6;
        }
        else if(str=="Tetrahedron")
        {
            sum+=4;
        }
        else if(str=="Dodecahedron")
        {
            sum+=12;
        }
        else if(str=="Octahedron")
        {
            sum+=8;
        }
    }
    cout<<sum<<endl;
    return 0;
}


