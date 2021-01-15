/*
    Problem link : https://www.spoj.com/problems/TRT/
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef set<int> si;
typedef set<int,greater<int>> sgi;
typedef stack<int> sti;
typedef stack<ll> stl;
typedef unordered_set<int> usi;
typedef unordered_set<ll> usl;
typedef queue<int> qi;
typedef queue<ll> ql;
typedef unordered_map<int,int> umi;
typedef unordered_map<ll,ll> uml;
typedef unordered_map<int,ll> umil;
typedef unordered_map<ll,int> umli;
typedef map<int,int> mi;
typedef map<ll,ll> ml;
typedef map<int,ll> mil;
typedef map<ll,int> mli;
#define endl "\n"
#define pb push_back
#define f(i,k,n) for(int i=k;i<n;i++)
#define ef(i,k,n) for(int i=k;i<=n;i++)
#define fl(i,k,n) for(ll i=k;i<n;i++)
#define efl(i,k,n) for(ll i=k;i<=n;i++)
#define vsort(v) sort(v.begin(),v.end())
#define intscan(a) scanf("%d",&a)
#define llscan(a) scanf("%lld",&a)
#define intprintln(a) printf("%d\n",a)
#define llprintln(a) printf("%lld\n",a)
#define intprints(a) printf("%d ",a)
#define llprints(a) printf("%lld ",a)
#define coutln(a) cout<<a<<endl
#define cout(a) cout<<a
int dp[2001][2001];
int func(int a[],int i,int j,int treat){
    if(i>j)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    return dp[i][j] = max(a[i]*treat+func(a,i+1,j,treat+1),a[j]*treat+func(a,i,j-1,treat+1));
}
int main(){
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    int a[n];
    f(i,0,n)
        cin>>a[i];
    cout<<func(a,0,n-1,1)<<"\n";
    return 0;
} 