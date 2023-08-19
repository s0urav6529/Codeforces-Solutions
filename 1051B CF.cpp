#include<iostream>
#include<vector>
#include<set>
using namespace std;
long long GCD(long long,long long);
int main()
{
    set<pair<long long ,long long>>s;
    long long l,r,i,j,cnt=0,gcd,pr;
    cin>>l>>r;
    pr=(r-l+1)/2;
    for(i=l,j=l+1;i<=r,j<=r;i+=2,j+=2)
    {
        gcd=GCD(i,j);
        if(gcd==1)
        {
                s.insert(make_pair(i,j));
                cnt++;
        }
        if(pr==cnt)
            break;
    }
    if(pr==cnt)
    {
        set<pair<long long ,long long>>::iterator it=s.begin();
        cout<<"YES"<<endl;
        while(it!=s.end())
        {
            cout<<it->first<<" "<<it->second<<endl;
            it++;
        }
    }
    else if(pr!=cnt)
        cout<<"NO"<<endl;
}
long long GCD(long long  a,long long b)
{
    if(a%b==0)
        return b;
    else
        return GCD(b,a%b);
}

