#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen  ("out.txt","w",stdout);
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
#define p3f(a,b,c)   cout<<a<<" "<<b<<" "<<c<<endl
#define p4f(a,b,c)   cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl
#define ff first
#define ss second
#define pb push_back
#define pi acos(-1.0)
//cin.get();
typedef long long int ll;
//typedef unsigned long long int llu;
//constexpr llu Mx=18446744073709551615;
constexpr ll MOD=1e9+7;
const int limit=1e5+5;

void an1nd1ta(int tc){
    
    int n , t, q , diff = 0;
    string s1 , s2;

    cin >> s1 >> s2 >> t >> q;

    n = s1.size();

    for(int i=0;i<n;i++){

        if(s1[i] != s2[i]) diff ++;

    }

    map<int,int>block;

    for(int i=0;i<=q;i++) block[i] = -1;

    int curtime = 1;

    while(q--){

        int type , pos;
        cin >> type;

        pos = block[curtime];

        if(pos > -1){  /// unblock the position

            if(s1[pos] != s2[pos]) diff++;

            block[curtime] = -1;

        }

        if(type == 1){
            
            cin >> pos;
            pos--;

            if(s1[pos] != s2[pos]) diff--;

            block[curtime + t] = pos;

        }
        else if(type == 2){

            int x , y ,pos1 , pos2;
            cin >> x >> pos1 >> y >> pos2;

            pos1--,pos2--;

            if(s1[pos1] != s2[pos1]) diff--;
            if(s1[pos2] != s2[pos2]) diff--;

            if(x == y){

                if(x == 1){
                    swap(s1[pos1] ,s1[pos2]);
                }
                else{
                    swap(s2[pos1] ,s2[pos2]);
                }

            }
            else{

                if(x == 1){

                    swap(s1[pos1],s2[pos2]);
                }
                else{
                    swap(s2[pos1],s1[pos2]);
                }

            }

            if(s1[pos1] != s2[pos1]) diff++;
            if(s1[pos2] != s2[pos2]) diff++;

        }
        else{

            if(diff == 0){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }

        curtime ++;
    }


    return;
}

int main(){
    fast;
    int testcase=1;
    cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}