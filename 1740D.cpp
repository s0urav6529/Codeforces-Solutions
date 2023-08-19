
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

void run_case(){

    ll n, m , k;
    cin >> n >> m >> k;


    priority_queue<int>p,stored;
    int a[k+5];
    for(int i=0;i<k;i++){

        cin >> a[i];
        p.push(a[i]);

    }

    int i=0;

    ll sz = (n*m)-4;

    while(p.size()>0){

        bool ok=true;
        int val = p.top();
        p.pop();
        if(stored.size() > 0 && val==stored.top()){
            stored.pop();
            ok= false;
        }
        if(ok){
            for(;i<k;){


                while(val!=a[i] && i<k) {
                    stored.push(a[i]);
                    //cout << a[i] <<" ";
                    i++;
                }
               // cout<<endl;

                if(stored.size()>sz){
                    //cout << s.size() <<endl;
                    cout<<"TIDAK"<<endl;
                    return;
                }
                i++;
                break;

            }
        }

    }

    if(stored.size()>sz){
        cout<<"TIDAK"<<endl;
    }
    else cout<<"YA"<<endl;



    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}
