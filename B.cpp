#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>indexed_multiset;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>indexed_set;


#pragma GCC optimize("Ofast")  
//#pragma GCC target("avx,avx2,fma") 
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("-O2")

#define all(a)             (a).begin(), (a).end()
#define ll                 long long
#define fi                 first
#define se                 second
#define pb                 push_back
#define pob                pop_back
#define bb                 begin()
#define ee                 end()
#define endll              '\n'

#define pii             pair<int,int>
#define pll             pair<long long int,long long int>
#define vi              vector<int>
#define vll             vector<long long int>
#define vii             vector<pii>
#define vpll            vector<pll>
 
#define inf               (1ll<<30ll)-1ll
#define llinf             (1ll<<62ll)-1ll

#define mod                1000000007
#define n_size             200005
#define g_size             20000005
#define eps                1e-9

const double PI=acos(-1);

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 way Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={-1,-1,+0,+1,+1,+0};int dy[]={-1,+1,+2,+1,-1,-2}; //Hexagonal Direction

vi v;

inline void solve(){

    ll int n,m,t,res;

    int l,r,mid;

    ll int maxi=-inf,mini=inf,count=0;

    int i,j,k;

    bool flag;

    cin>>n>>k;
    string a,b;

    cin>>a>>b;

    for(i=0;i<n;i++){

        set<char>mst;
        ll sum=0;
        count=0;
        for(j=i;j<min(n,i+101ll);j++){

            if(a[j]!=b[j]){
                mst.insert(a[j]);
            }

            if(mst.size()<=k){
                count++;
                maxi=max(maxi,sum+(count*(count+1))/2);
            }

            if(mst.size()>k){
                mst.erase(a[j]);
                sum+=(count*(count+1))/2;
                count=0;
            }
        }
    }

    cout<<max(0ll,maxi)<<endl;



}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    //cout<<fixed<<setprecision(11);


    int T=1;
    cin>>T;

    while(T--) solve();
    
    
}