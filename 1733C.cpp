    #include<bits/stdc++.h>
    using namespace std;
    #define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define read freopen ("in.txt","r",stdin);
    #define out freopen ("out.txt","w",stdout);
    #define reset(a,b)   memset(a, (b), sizeof(a))
    #define sortv(k)     sort(k.begin(),k.end())
    #define sortg(k)     sort(k.begin(),k.end(),greater<int>())
    #define rev(k)       reverse(k.begin(),k.end())
    #define umin(a,b)    a=min(a,b)
    #define umax(a,b)    a=max(a,b)
    #define min3(a,b,c)  min(a, min(b,c))
    #define pyes         cout<<"Yes"<<endl
    #define pno          cout<<"No"<<endl
    #define setprecision(y,x)     cout<<fixed<<setprecision(y)<<x<<endl   ///kotoghor , value
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
    typedef long double ld;
    typedef unsigned long long int llu;
    //constexpr llu Mx=18446744073709551615;
    constexpr ll MOD=998244353;
    const int limit=2e5+5;

    void run_case(){

        int n; cin >> n;
        int a[n+5];

        int ev=0,od=0;
        for(int i=1;i<=n;i++) {
            cin>>a[i];

            if(a[i]&1) od++;
            else ev++;

        }

        if(is_sorted(a+1,a+n+1)) {
            cout<<0<<endl;
            return;
        }

        if(ev==n || od==n){
            cout<<n-1<<endl;
            for(int i=1;i<n;i++) cout<<i<<" "<<n<<endl;
            return;
        }

        if(a[1]&1){
            //odd

            vector<pair<int,int>>ans;
            if(a[n]&1){

                int pos;
                for(int i=1;i<=n;i++) if(a[i]%2==0) pos=i;


                a[n]=a[pos];
                ans.pb({pos,n});
                a[n]=a[1];
                ans.pb({1,n});

                for(int i=2;i<n;i++) {

                    if(a[i]%2==0){
                        a[i]=a[1];
                        ans.pb({1,i});
                    }
                }

                for(int i=1;i<n;i++){
                    if(a[i]!=a[n]){
                        a[i]=a[n];
                        ans.pb({i,n});
                    }
                }


            }
            else{

                a[n]=a[1];
                ans.pb({1,n});

                for(int i=2;i<n;i++) {

                    if(a[i]%2==0){
                        a[i]=a[1];
                        ans.pb({1,i});
                    }
                }

                for(int i=1;i<n;i++){
                    if(a[i]!=a[n]){
                        a[i]=a[n];
                        ans.pb({i,n});
                    }
                }
            }

            cout<<ans.size()<<endl;
            for(auto i:ans) cout<<i.ff<<" "<<i.ss<<endl;
            cout<<endl;

        }
        else{

            //even

            vector<pair<int,int>>ans;
            if(a[n]%2==0){

                a[1]=a[n];
                ans.pb({1,n});

                for(int i=2;i<n;i++){
                    if(a[i]&1){
                        a[i]=a[1];
                        ans.pb({1,i});
                    }
                }

                for(int i=1;i<n;i++){
                    if(a[n]!=a[i]){
                        a[i]=a[n];
                        ans.pb({i,n});
                    }
                }

            }
            else{
                a[n]=a[1];
                ans.pb({1,n});

                for(int i=2;i<n;i++){
                    if(a[i]&1){
                        a[i]=a[1];
                        ans.pb({1,i});
                    }
                }

                for(int i=1;i<n;i++){
                    if(a[n]!=a[i]){
                        a[i]=a[n];
                        ans.pb({i,n});
                    }
                }


            }
            cout<<ans.size()<<endl;
            for(auto i:ans) cout<<i.ff<<" "<<i.ss<<endl;

        }


        return;
    }

    int main(){
        fast;
        int tc=1;
        cin>>tc;
        while(tc--) run_case();
        return 0;
    }

