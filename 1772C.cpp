#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define uniq(vec)    vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())))
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define min3(a,b,c)  min(a, min(b,c))
#define pyes         cout<<"Yes"<<endl
#define pno          cout<<"No"<<endl
#define pf(a)        cout<<a<<endl
#define p2f(a,b)     cout<<a<<" "<<b<<endl
#define p3f(a,b,c)  cout<<a<<" "<<b<<" "<<c<<endl
#define p4f(a,b,c)  cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl
#define ff first
#define ss second
#define pb push_back
#define pi acos(-1.0)
//cin.get();
typedef long long int ll;
//typedef unsigned long long int llu;
//constexpr llu Mx=18446744073709551615;
constexpr ll MOD=1000000007;
const int limit=2e5+5;


void an1nd1ta(int t){

    int k,n;
    cin >> k >>n;

    int a[k+5];

    for(int i=1;i<=k;i++) a[i] = i;

    int j=3 , koro = 2;
    while(1){

        bool ok= true;
        int x = a[j-1] + koro;

        for(int l = j ;l <= k ;l++){

            if(x++ > n) {
                ok = false;
                break;
            }

        }

        if(!ok) break;
        else{
            x = a[j-1]+koro;
            a[j] = x;
            for(int l=j+1;l<=k;l++){
                a[l] = a[l-1]+1;
            }
        }
        j++;
        koro++;

        if(j>k) break;
    }

    for(int i=1;i<=k;i++) cout<<a[i]<<" ";
    cout<<endl;


    return;
}

int main(){
    fast;
    int tc=1;
    cin >> tc;
    for(int t=1;t<=tc;t++) an1nd1ta(t);
    return 0;
}

