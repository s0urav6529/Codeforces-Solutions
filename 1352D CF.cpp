#include<iostream>
using namespace std;
int ara[100001];
int main()
{
    int t,n,bob=0,al=0,sum=0,en=0,i,mv=0,con=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        int pre=0,j=0,k=n-1;;
        for(int i=1;;i++)
        {
            if(i%2!=0)
            {
               while(ara[j]!=0)
               {
                   sum+=ara[j];
                   ara[j]=0;
                   j++;
                   if(sum>pre)
                   {
                       al+=sum;
                       pre=sum;
                       con=1;
                       mv++;
                       break;
                   }
               }
               if(con==0&&sum<=pre&&sum!=0)
               {
                    al+=sum;
                    en=1;
                    mv++;
               }
               if(sum==0)
                    en=1;
               sum=0;
               con=0;
            }
            else
            {

                while(ara[k]!=0)
                {
                    sum+=ara[k];
                    ara[k]=0;
                    k--;
                    if(sum>pre)
                    {
                        bob+=sum;
                        pre=sum;
                        mv++;
                        con=1;
                        break;
                    }
                }
               if(con==0&&sum<=pre&&sum!=0)
               {
                    bob+=sum;
                    en=1;
                    mv++;
               }
              if(sum==0)
                    en=1;
               sum=0;
               con=0;
            }
            if(en==1)
                break;
        }
        cout<<mv<<" "<<al<<" "<<bob<<endl;
        bob=0;al=0;sum=0;en=0,pre=0,mv=0,con=0;
    }
    return 0;
}
