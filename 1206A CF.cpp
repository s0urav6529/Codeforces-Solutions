#include<iostream>
#include<algorithm>
int aran[101];
int aram[101];
using namespace std;
int main()
{
    int n,m,c=1,te1,te2,k,l,sum;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>aran[i];
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>aram[i];
    sort(aran,aran+n,greater<int>());
    sort(aram,aram+m,greater<int>());
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum=aran[i]+aram[j];
            for(k=0;k<n;k++)
            {
                if(sum==aran[k])
                {
                    c=0;
                }
                else
                {
                    for(l=0;l<m;l++)
                    {
                        if(sum==aram[l])
                        {
                            c=0;
                        }
                        else
                        {
                            c=1;
                            te1=aran[k];
                            te2=aram[l];
                            break;

                        }
                    }
                    if(c==1)
                        break;
                }
            }
            if(c==1)
                break;
        }
        if(c==1)
            break;
    }
    if(c==1)
        cout<<te1<<" "<<te2<<endl;
    return 0;
}
