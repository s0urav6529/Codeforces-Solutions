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
constexpr ll MOD=1e9+7;
const int limit=5e3+5;

void an1nd1ta(int tc){
    int n;
    cin >> n;
    int a[n+5] , b[n+5] , cnt1[n+5] , cnt2[n+5];

    for(int i=1;i<=n;i++) {
        cin >> a[i];
        b[i] = a[i];
        cnt1[i] = cnt2[i] = 1;
    }

    vector<int>ans1(n+1,0), ans2(n+1,0);

    for(int i=1;i<=n;i++){

        if(cnt1[a[i]] == 1 && a[i] != -1) ans1[i] = a[i] ,  cnt1[a[i]] = 0 , a[i] = -1;

    }

    for(int i=1;i<=n;i++){

        if(cnt2[a[i]] == 1 && a[i] != -1) ans2[i] = a[i] ,  cnt2[a[i]] = 0 , a[i] = -1;

    }

    vector<int>ache1,ache2;

    for(int i=1;i<=n;i++){

        if(cnt1[i] == 1) {
                ache1.pb(i);
              //  cout<<i<<" ";
        }
    }
    //cout<<"ache1"<<endl;

     for(int i=1;i<=n;i++){

        if(cnt2[i] == 1) {
                ache2.pb(i);
               // cout<<i<<" ";
        }
    }
    //cout<<"ache2"<<endl;

    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >p1 , p2;

    for(int i=1;i<=n;i++){

        if(ans1[i] != 0){
            p1.push({ans1[i] , i});
        }

        if(ans2[i] != 0){
            p2.push({ans2[i] , i});
        }

    }

    sortv(ache1);
    rev(ache1);
    sortv(ache2);
    rev(ache2);

    

    while(p1.size() > 0){

        int val = p1.top().first;
        int idx = p1.top().second;

        //cout<<ache2.back()<<endl;

        if(val < ache2.back()){

           // p2f(val,ache2.back());

            cout<<"NO"<<endl;
            return;
        }
        else{

            ans2[idx] = ache2.back();
            ache2.pop_back();
        }
        p1.pop();

    }

    while(p2.size() > 0){

        int val = p2.top().first;
        int idx = p2.top().second;


        if(val < ache1.back()){

            //p2f(val,ache1.back());

            cout<<"NO"<<endl;
            return;
        }
        else{

            ans1[idx] = ache1.back();
            ache1.pop_back();
        }
        p2.pop();

    }

    for(int i=1;i<=n;i++){

        if(ans1[i] == 0 || ans2[i] == 0){
            cout<<"NO"<<endl;
            return;
        }

        if(max(ans1[i],ans2[i]) != b[i]){
            cout<<"NO"<<endl;
            return;

        }

    }
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++) cout<<ans1[i]<<" ";
        cout<<endl;

     for(int i=1;i<=n;i++) cout<<ans2[i]<<" ";
        cout<<endl;

    return;
}

int main(){
    fast;
    int testcase=1;
    cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}