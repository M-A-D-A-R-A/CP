#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
#define S size()
#define E end()
#define B begin()
#define L length()
 
#define endl "\n"
#define cnt count
#define in insert
#define er erase
#define fi first
#define se second
#define fl float
#define ld long double
#define ll long long

#define gcd __gcd
#define mp make_pair
#define pb push_back
#define popb pop_back()
#define pf push_front
#define popf pop_front()
#define all(v) v.B,v.E
#define acc(v) accumulate(all(v), 0)
#define psum partial_sum
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define np next_permutation
#define maxe *max_element
#define mine *min_element
 
#define forl(i,n) for(ll i = 0; i < n; i++)
#define fore(i,m,n) for (ll i = m; i <= n; i++)
#define rforl(i,n) for (ll i = n - 1; i >= 0; i--)
#define rfore(i,m,n) for (ll i = m; i >=n; i--)    
#define iter(s) for(auto it:s)
 

#define prec(n) fixed<<setprecision(n)
#define popcnt(n) __builtin_popcountll(n)
#define parity(n) __builtin_parityll(n)
#define clz(n) __builtin_clzll(n)
#define ctz(n) __builtin_ctzll(n)

#define sll set<ll>
#define sc set<char>
#define mll map<ll,ll>
#define vll vector<ll>
#define vc vector<char>
#define pll pair<ll,ll>
#define vpll vector<pll>
#define msll multiset<ll,greater<ll>>
#define msc multiset<char,greater<char>>
#define vvll vector<vector<ll>>
#define rev reverse

#define tc ll q;cin>>q;while(q--)
#define pat ll n;cin>>n
#define pat1 vll a(n);forl(i,n)cin>>a[i]
#define pat2 ll n,k;cin>>n>>k;vll a(n);forl(i,n) cin>>a[i]
#define pats string s;cin>>s
#define yesno if(flag)cout<<"YES\n";else cout<<"NO\n"
#define loop forl(i,n)

#define p0(a) cout << a << " "
#define p1(a) cout << a << endl
#define p2(a,b) cout << a << " " << b << endl
#define p3(a,b,c) cout << a << " " << b << " " << c << endl
#define p4(a,b,c,d) cout << a << " " << b << " " << c << " " << d << endl
 
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define mod1 1000000007
#define mod2 998244353
#define PI 3.1415926535897932384626433832
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define oset tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>

//member functions :
//IMPORTANT:Ordered Set is basically a set and doesn't allow duplicates so use pair<ll,ll> to get 
//an Ordered Multiset
//1. order_of_key(k) : number of elements strictly lesser than k
//2. find_by_order(k) : k-th element in the set
//random number generator using uniform distribution
//  mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
//   randomly  generate index a[uniform_int_distribution<int>(l,r)(rng)];
#define ofk order_of_key
#define fbo find_by_order
using namespace std;
void printarr(ll a[],ll n){
    forl(i,n){
        p0(a[i]);
    }
    cout<<endl;
}
void printv(vector<ll>&v){
    forl(i,v.S){
        p0(v[i]);
    }
    cout<<endl;
}
vector<ll> res;
void factorize(ll n) {
    for (ll i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            res.push_back(i);
            n /= i;
        }
    }
    if (n != 1) {
        res.push_back(n);
    }
}
vll divs;
void divisor(ll n){
        for(ll i=2;i<=sqrt(n);i++){
            if(n%i==0){
                divs.pb(i);
                if(n/i!=i){
                    divs.pb(n/i);
                }
            }
        }
        divs.pb(1);
        if(n!=1){
            divs.pb(n);
        }
}
vector<ll>prefix_function(string &s) {
    ll n = (ll)s.length();
    vector<ll> pi(n);
    for (ll i = 1; i < n; i++) {
        ll j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}
ll modexpo(ll x,ll y)  
{   ll res = 1;
    x = x%mod1; 
    if (x == 0) return 0; 
    while (y > 0)  
    {   if (y & 1)res = (res*x) % mod1;  
        y = y>>1; 
        x = (x*x) % mod1;  
    }  
    return res;  
}  
//DSU-Disjoint Set Union-Find
/*ll parent[200005];
ll sz[200005];
void MakeSet(ll v){
    parent[v]=v;
    sz[v]=1;
}
ll FindSet(ll v){
    if(v==parent[v]){
        return v;
    }
    return parent[v]=FindSet(parent[v]);
}
void UnionSet(ll u,ll v){
    u=FindSet(u);
    v=FindSet(v);
    if(u==v){
        //both are already in the same set
    }else{
        if(sz[u]<sz[v]){
            swap(u,v);
        }
        parent[v]=u;
        sz[u]+=sz[v];
    }
}
*/
/* LCA 
vll g[200005];
const ll maxN=log2(200005);
ll dp[200005][maxN+1];
ll level[200005]={};
//set dp to -1 before use
//dp[i][j]=(2^j)th parent of i
void dfslca(ll node,ll par,ll lvl){
    dp[node][0]=par;
    level[node]=lvl;
    for(ll child:g[node]){
        if(child!=par){
            dfslca(child,node,lvl+1);
        }
    }
}
void dpfill(ll n){
    dfslca(1,-1,0);
    for(ll j=1;j<=maxN;j++){
        for(ll i=1;i<=n;i++){
            if(dp[i][j-1]!=-1){
            dp[i][j]=dp[dp[i][j-1]][j-1];
            }
        }
    }
}
ll LCA(ll a,ll b){
    if(level[a]>level[b]){
        swap(a,b);
    }
    ll d=level[b]-level[a];
    while(d>0){
        ll i=log2(d);
        b=dp[b][i];
        d-=(1<<i);
    }
    if(a==b){
        return a;
    }
    for(ll i=maxN;i>=0;i--){
        if(dp[a][i]!=-1 && (dp[a][i]!=dp[b][i])){
            a=dp[a][i],b=dp[b][i];
        }
    }
    return dp[a][0];
}
ll dist(ll a,ll b){
    ll c=LCA(a,b);
    return level[a]+level[b]-2*level[c];
}
*/
/*
Prime factorization sieve MAXlog(MAX) preprocessing and subsequent factorizations in logn time
const ll MAXM = 15000001;
bool v[MAXM];
ll sp[MAXM];
 
void Sieve(){
    sp[1] = 1;// base case
    for (ll i = 2; i < MAXM; i += 2)    sp[i] = 2;//even numbers have smallest prime factor 2
    for (ll i = 3; i < MAXM; i += 2){
        if (!v[i]){
            sp[i] = i;
            for (ll j = i; (j*i) < MAXM; j += 2){
                if (!v[j*i])    v[j*i] = true, sp[j*i] = i;
            }
        }
    }
} 
 

*/
/*
//Lagrange Interpolation 
//Used in questions involving summations where no. of terms is very large 
long long int inverse(long long int i,ll MOD){
    if(i==1) return 1;
    return (MOD - ((MOD/i)*inverse(MOD%i,MOD))%MOD+MOD)%MOD;
}  
ll normalize(ll x,ll MOD){
    if(x<0){
        return (MOD+x%MOD)%MOD;
    }else{
        return x%MOD;
    }
} 
ll Interpolate(vll &sum,ll n,ll roots){
    //interpolation of f(x)=sum[x]
       // sum[1] sum[2] sum[3] ........ sum[roots] are the roots points needed for interpolation of the 
       // roots-1 degree polynomial which is the summation of n^k
       ll pref[roots+2]={};
       pref[0]=1;
       for(ll i=1;i<=roots;i++){
           pref[i]=(pref[i-1]%mod1*normalize(n-i,mod1))%mod1;
       }
       ll suff[roots]={};
       suff[roots+1]=1;
       for(ll i=roots;i>=1;i--){
           suff[i]=(suff[i+1]%mod1*normalize(n-i,mod1))%mod1;
       }
       ll denom[roots+1]={};
       denom[1]=1;
       for(ll i=2;i<=roots;i++){
           denom[1]=(denom[1]%mod1*normalize(1-i,mod1)%mod1)%mod1;
       }
       for(ll i=2;i<=roots;i++){
           denom[i]=((denom[i-1]%mod1*normalize(i-1,mod1)%mod1)%mod1*inverse((normalize(1-(roots-(i-2)),mod1))%mod1,mod1)%mod1)%mod1;
       }
       ll ans=0;
       for(ll i=1;i<=roots;i++){
           ll prod=1;
           prod=(prod%mod1*sum[i]%mod1)%mod1;
           prod=(prod%mod1*pref[i-1]%mod1)%mod1;
           prod=(prod%mod1*suff[i+1]%mod1)%mod1;
           prod=(prod%mod1*inverse(denom[i],mod1)%mod1)%mod1;
           ans=(ans%mod1+prod)%mod1;
       }
       return ans;
}
*/ 
/* MERGE SORT+Counting Inversions
ll inversioncnt=0;
void Merge(ll a[],ll l,ll m,ll r){
    ll n1=m-l+1;
    ll n2=r-m;
    ll left[n1],right[n2];
    for(ll i=0;i<n1;i++){
        left[i]=a[l+i];
    }
    for(ll i=0;i<n2;i++){
        right[i]=a[m+1+i];
    }
    ll i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            a[k]=left[i];
            i++;
            k++;
        }else{
            inversioncnt+=(n1-i);
            a[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        a[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=right[j];
        j++;
        k++;
    }
}
void MergeSort(ll a[],ll l,ll r){
    if(l<r){
        ll mid=l+(r-l)/2;
        MergeSort(a,l,mid);
        MergeSort(a,mid+1,r);
        Merge(a,l,mid,r);
    }
}
*/
/*STRONGLY CONNECTED COMPONENTS 
vll g[400005];
vll gt[400005];
ll vis[400005];
vll order,component;
vll roots(400005,0);
vll root_nodes;
vll gscc[400005];
void addEdge(ll u,ll v){
    //graph
    g[u].pb(v);
    //transposed graph
    gt[v].pb(u);
}
//dfs1 generates all vertices in the order vector in the increasing order of out time
//reverse topological order
void dfs1(ll u){
    vis[u]=1;
    for(auto v:g[u]){
        if(!vis[v]){
            dfs1(v);
        }
    }
    order.pb(u);
}

//dfs2 is done on the inverse graph and it visits only those nodes present in the current strongly connected component
void dfs2(ll u){
    vis[u]=1;
    component.pb(u);
    for(auto v:gt[u]){
        if(!vis[v]){
            dfs2(v);
        }
    }
}
//create the condensation graph
void condense(ll n,vll &selfloop){
    for(ll i=1;i<=n;i++){
        vis[i]=0;
    }
    //dfs1 generates all vertices in the order vector in the increasing order of out time
    for(ll i=1;i<=n;i++){
        if(!vis[i]){
            dfs1(i);
        }
    }
    //sort on decreasing order of out time
    rev(all(order));
    //dfs2 is done on the inverse graph and it visits only those nodes present in the current strongly connected component
    for(ll i=1;i<=n;i++){
        vis[i]=0;
    }
    for (auto x : order){
            if (!vis[x]) {
                dfs2(x);
                ll root = component.front();
                for(auto u : component) 
                {
                    roots[u] = root;
                    selfloop[root] |= selfloop[u];
                }
                root_nodes.push_back(root);
                if(component.S > 1)
                    selfloop[root] = 1;
 
                component.clear();
            }
    }
    for (ll u = 1; u <=n; u++){
        for (auto v : g[u]) {
            ll root_u = roots[u];
            ll root_v = roots[v];
            if (root_v != root_u)
                gscc[root_u].pb(root_v);
        }
    }
    for(ll i=1;i<=n;i++){
        vis[i]=0;
    }
}
*/
/* Dijkstra
vpll g[1001];
ll dist[1001];
void Dijkstra(ll s){
    for(ll i=1;i<=1000;i++){
        dist[i]=MAX/2;
    }
    dist[s]=0;
    set<pll>pq;
    pq.insert({0,s});
    while(pq.size()){
        pll top=*pq.begin();
        pq.erase(pq.begin());
        ll u=top.second;
        ll d=top.first;
        for(auto edge:g[u]){
            ll v=edge.first;
            ll w=edge.second;
            if(d+w<dist[v]){
                pq.erase({dist[v],v});
                dist[v]=d+w;
                pq.insert({dist[v],v});
            }
        }
    }
}
 
*/
/* LINKED LIST
   struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
   }; 
 
*/

/*
DFS over the complement graph of the given graph

g contains the edges that are not present 
s is the set of nodes that need to be visited 

vll g[500005];
ll vis[500005];
ll dfs(ll u,sll &s){
    vis[u]=1;
    ll cnt=1;
    s.erase(u);
    sll temp;
    vector<ll>canbevis;
    for(auto v:g[u]){
        if(s.find(v)!=s.end()){
            s.erase(v);
            temp.insert(v);
        }
    }
    for(auto v:s){
        canbevis.pb(v);
    }
    s.clear();
    for(auto v:temp){
        s.insert(v);
    }
    for(auto v:canbevis){
        if(!vis[v]){
        cnt+=dfs(v,s);
        }
    }
    return cnt;
}

*/

/*
template<typename T>
struct LazySegmentTree{
    vector<T> st;
    void assign(vector<ll> &v1){
        ll n = v1.S;
        st = vector<T> (4 * n + 1);
        build(v1, 1, 0, n - 1);
    }
    ll combine(ll x, ll y){
        return x + y;   // check which opeartion is to be performed
    }
    void build(vector<ll> &v1, ll v, ll tl, ll tr){
        if(tl == tr){
            st[v].sum=v1[tl];     //  check
        }
        else{
            ll mid = (tl + tr) / 2;
            build(v1, 2 * v, tl, mid);
            build(v1, 2 * v + 1, mid + 1, tr);
            st[v].sum = combine(st[2 * v].sum, st[2 * v + 1].sum);
        }
    }
    void prop(ll v,ll tl,ll tr){
        //range assignment
        if(st[v].mark){
            st[v].sum = (tr - tl + 1) * st[v].change;
            //st[v].sum = st[v].change; for min-max query
            // check which opeartion is to be performed
            if(tl != tr){
                st[2 * v].change = st[2 * v + 1].change = st[v].change;
                st[2 * v].mark = st[2 * v + 1].mark = 1;
                st[2 * v].lazy = st[2 * v + 1].lazy = 0;
            }
            st[v].change = st[v].mark = 0;
        }
        
        //range addition
        // if(st[v].lazy != 0){
        //     st[v].sum += (tr - tl + 1) * st[v].lazy;
        //     //st[v].sum +=st[v].lazy; for min-max query
        //     // check which opeartion is to be performed
        //     if(tl != tr){
        //         st[2 * v].lazy += st[v].lazy;
        //         st[2 * v + 1].lazy += st[v].lazy;
        //     }
        //     st[v].lazy = 0;
        //     // if st[v].lazy is != 0 at any point, it means from that vertex onwards we have to make updations
        // }
    }
    ll query(ll v,ll tl,ll tr,ll l,ll r){
        if(tr < l || r < tl){
            return 0; // check which opeartion is to be performed
        }
        prop(v, tl, tr);
        if(l <= tl && tr <= r){
            return st[v].sum;
        }
        ll mid = (tl + tr) / 2;
        return combine(query(2 * v, tl, mid, l, min(r, mid)), query(2 * v + 1, mid + 1, tr, max(l, mid + 1), r));
    }
    
    //range addition
    void update_many(ll v,ll tl,ll tr,ll l,ll r,ll newVal){
        prop(v, tl, tr);
        if(tr < l || r < tl){
            return;
        }
        if(l == tl && r == tr){
            st[v].lazy += newVal;
            prop(v, tl, tr);
            return;
        }else{
            ll mid = (tl + tr) / 2;
            update_many(2 * v, tl, mid, l, min(r, mid), newVal);
            update_many(2 * v + 1, mid + 1, tr, max(l, mid + 1), r, newVal);
            st[v].sum = combine(st[2 * v].sum, st[2 * v + 1].sum);
        }
    }
    
    //range assignment
    void change_many(ll v, ll tl, ll tr, ll l, ll r, ll newVal){
        prop(v, tl, tr);
        if(tr < l || r < tl){
            return;
        }
        if(l == tl && r == tr){
            st[v].lazy = 0;
            st[v].mark = 1;
            st[v].change = newVal;
            prop(v, tl, tr);
            return;
        }else{
            ll mid = (tl + tr) / 2;
            change_many(2 * v, tl, mid, l, min(r, mid), newVal);
            change_many(2 * v + 1, mid + 1, tr, max(l, mid + 1), r, newVal);
            st[v].sum = combine(st[2 * v].sum, st[2 * v + 1].sum);
        }
    }
};
struct Node{
    ll sum, lazy;
    ll change;
    bool mark;
};
LazySegmentTree<Node> seg;
*/
/*
template<typename T>
struct SparseTable{
    vector<vector<T>> st;
    void done(){
        st.clear();
    }
    void build(vector<T> &v1){
        int n = v1.S;
        int n1 = __lg(n)+1;
        st = vector<vector<T>> (n1,vector<T>(n));
        forl(i,n1){
            forl(j,n+1-(1<<i)){
                if(!i)  st[0][j] = v1[j];    //  base condition
                else    st[i][j] = __gcd( st[i-1][j], st[i-1][j + (1<<(i-1))] );
                //  check which opeartion is to be performed
            }
            if(n<(1<<i))    break;
        }
    }
    T query(int lo, int hi){
        // 0-indexed
        int x = __lg(hi-lo+1);
        int y = 1<<x;
        return __gcd(st[x][lo], st[x][hi-y+1]);
        //  check which opeartion is to be performed
    }
};
SparseTable<ll> spar;
*/

/* Binary Trie 

    class TrieNode{
      public:
        ll key;
        TrieNode* child[2];
        TrieNode(){
            key=0;
            child[0]=NULL;
            child[1]=NULL;
        }
    };
    TrieNode* root; // TrieNode* root = new TrieNode(); in main
    void insert(ll x){
        TrieNode* node=root;
        for(ll i=31;i>=0;i--){
            bool bit=(x&(1<<i));
            if(node->child[bit]){
                node=node->child[bit];
            }else{
                node->child[bit]=new TrieNode();
                node=node->child[bit];
            }
        }
        node->key=x;
    }
    ll findmaxxor(ll x){
        TrieNode* node=root;
        for(ll i=31;i>=0;i--){
            bool bit=(x&(1<<i));
            if(node->child[!bit]){
                node=node->child[!bit];
            }else{
                if(node->child[bit]){
                node=node->child[bit];
                }
            }
        }
        return (node->key)^x;
    }


*/

/*DP ON DAG 
Generate the topological sort of the graph 
// we can check for cycles in directed graph using toplogical sort 
//if there is a cycle then it is guarenteed that there is an edge u->v such that v occurs earlier in topological order
 vll g[200005];
 ll vis[200005];
 vll topological;
 void dfs(ll u){
    vis[u]=1;
    for(auto v:g[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
    topological.pb(u);
 }

  reverse(all(topological));
  for(auto u:topological){
      //iterating over the u with least dependencies first i.e. the logical order of finishing tasks
      for(auto v:g[u]){
       //dp[v] = f(dp[u],dp[v])
    }
  }

*/


struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
//unordered_map<ll,ll,custom_hash>mp;
//Makes unordered_map faster
//mp.reserve(2*n); Reserves fixed number of buckets at the beginning so no time waste in resizing
//mp.max_load_factor(0.25);
//Pythagorean Triplets-2n+1,2n^2+2n,2n^2+2n+1
//map is faster than multiset
//when erasing from set using iterator make sure to check that the iterator is not s.end() otherwise face RUNTIME ERROR
//**********************************
 
 
 
 
//             Shinzou Wo Sasageyo
int main(){
   FAST;
   tc{
       ll n,m;
       cin>>n>>m;
       ll a[n][m];
       ll maxm=MIN;
       ll row=-1,col=-1;
       forl(i,n){
           forl(j,m){
               cin>>a[i][j];
               if(a[i][j]>maxm){
                   maxm=a[i][j];
                   row=i;col=j;
               }
           }
       }
       ll ans=(max(n-row,row+1))*(max(m-col,col+1));
       p1(ans);
       
   }
  
  
  
    
}