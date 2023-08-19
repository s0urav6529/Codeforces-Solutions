#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
namespace __gnu_pbds{ typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set; }
using namespace __gnu_pbds;


typedef long long int ll;
typedef unsigned long long int llu;
constexpr ll MOD=1e9+7;
const int limit=1e6+5;

string s;
vector<int>Z(limit);
int n;


void Z_function(){


    for (int i=1, l=0, r=0; i<n ; i++) {

        if (i <= r){
            Z[i] = min (r-i+1, Z[i-l]);
        }

        while ( (i + Z[i]) < n && ( s[Z[i]] == s[i+Z[i]]) ){
            Z[i]++ ;
        }

        if ( ( i+Z[i]-1 ) > r){
            l = i;
            r = i + Z[i]-1;
        }
    }
    return;

}

int main(){
    fast;

    cin >> s;
    n=s.size();

    Z_function();

    int ans=0;
    ordered_set st;

    for(int i=0 ;i <n;i++) {

        st.insert(Z[i]);

        if(i+Z[i]==n){

            int pos = st.order_of_key(Z[i]);

            if(st.size()-pos>1) ans=max(ans,Z[i]);

        }

    }

    if(!ans) cout <<"Just a legend"<<endl;
    else{
        for(int i=0 ;i < ans ;i++) cout<<s[i];
        cout<<endl;
    }

    return 0;
}





