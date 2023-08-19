#include<bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int limit=1e5+5;


int a[limit],nextpos[limit],jumpcnt[limit];


void update(int block,int n,int nob){

    int s_pos=block*nob;
    int e_pos=min(n,s_pos+nob)-1;

    for(int j=e_pos;j>=s_pos;j--){

        int next_idx=j+a[j];

        if(next_idx <= e_pos && nextpos[next_idx] <= e_pos ){

            jumpcnt[j]=jumpcnt[next_idx]+1;

            nextpos[j]=nextpos[next_idx];
        }
        else{

            jumpcnt[j]=1;
            nextpos[j]=next_idx;

        }
    }

}


int main(){
    fast;
    int n,m;
    scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int nob=sqrt(n)+1;

    for(int i=n/nob;i>=0;i--){
        update(i,n,nob);
    }

    while(m--){

        int type,pos,val;
        scanf("%d %d",&type,&pos);
        pos--;

        if(type){
            int ans=0;
            while(true){

                ans+=jumpcnt[pos];

                if(nextpos[pos]<n){
                    pos=nextpos[pos];
                }
                else break;

            }
            printf("%d %d\n",pos+1,ans);

        }
        else{

            scanf("%d",&a[pos]);
            update(pos/nob,n,nob);
        }

    }
    return 0;
}



