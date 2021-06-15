///.................***SUDIPTO GHOSH***.........................///
///......BANGLADESH UNIVERSITY OF BUSINESS AND TECHONOLOGY......///
///...................DEPT OF CSE(DAY).........................///
///.....................INTAKE-44,13...........................///
#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define ll long long
#define i64 long long
#define ull unsigned long long int
#define PI 3.1415926535897932384626
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define br printf("\n")
#define fo(i, n) for(i=0;i<n;i++)
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)

// const int MOD = 998244353;
const int MOD = 1e9+7;
int bitcount(int n)
{
    return (__builtin_popcountll(n));
}
bool isp2(int n)
{
    return (__builtin_popcountll(n)==1);
}
int gcd(int a,int b)
{
    return __gcd(a,b);
}
int lcm(int a,int b)
{
    return (a*b)/(__gcd(a,b));
}
int hcf(int a,int b)
{
    if(a==0)return b;
    return hcf(b%a, a);
}
int modpow(int a,int b,int m)
{
    int ans=1;
    while(b)
    {
        if(b&1)ans=(ans*a)%m;
        b/=2;
        a=(a*a)%m;
    }
    return ans;
}
bool isprime(int n)
{
    if(n<2)return false;
    if(n==2)return true;
    if(n%2==0)return false;
    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}
const int MXX=1e5+69;
int fact[MXX],invfact[MXX];
int modinv(int k)
{
    return modpow(k,MOD-2,MOD);
}
void combinatorics()
{
    fact[0]=fact[1]=1;
    for(int i=2; i<MXX; i++)
    {
        fact[i]=fact[i-1]*i;
        fact[i]%=MOD;
    }
    invfact[MXX-1]=modinv(fact[MXX-1]);
    for(int i=MXX-2; i>= 0; i--)
    {
        invfact[i]=invfact[i+1]*(i+1);
        invfact[i] %= MOD;
    }
}
int nCr(int x, int y)
{
    if(y>x)return 0;
    int num=fact[x];
    num*=invfact[y];
    num%=MOD;
    num*=invfact[x-y];
    num%=MOD;
    return num;
}
string lwr(string s)
{
    transform(all(s),s.begin(),::tolower);
    return s;
}
string upr(string s)
{
    transform(all(s),s.begin(),::toupper);
    return s;
}
struct DSU
{
    vector<int> par,sz;
    DSU(int n)
    {
        par.resize(n);
        sz.resize(n);
        for(int i=0; i<n; i++)par[i]=i,sz[i]=1;
    }
    int find(int x)
    {
        if(x == par[x])return x;
        else return (par[x]=find(par[x]));
    }
    void Unite(int x,int y)
    {
        x=find(x);
        y=find(y);
        if(x==y)return;
        if(sz[x]<sz[y])swap(x,y);
        sz[x]+=sz[y];
        par[y]=x;
    }
    bool Same(int x, int y)
    {
        return find(x)==find(y);
    } int size(int x)
    {
        return sz[find(x)];
    }
};
template<typename T> void prev(vector<T> &v)
{
    for(auto t:v)cout<<t<<" ";
    cout<<endl;
}
void prar(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
template <typename T> std::pair<bool, int > findInVector(const std::vector<T>  & vecOfElements, const T  & element)
{
    std::pair<bool, int > result;
    auto it = std::find(vecOfElements.begin(), vecOfElements.end(), element);
    if (it != vecOfElements.end())
    {
        result.second = distance(vecOfElements.begin(), it);
        result.first = true;
    }
    else
    {
        result.first = false;
        result.second = -1;
    }
    return result;
}
bool isvowel(char ch)
{
    string s="aeiou";
    for(char c:s)
    {
        if(c==ch)
        {
            return true;
        }
    }
    return false;
}
const int infms = 2e18;
int inversions = 0;
void Merge(int a[],int start,int mid,int end)
{
    int n1=mid-start+1;
    int n2=end-mid;
    int left[n1+2];
    int right[n2+2];
    left[n1+1] = infms;
    right[n2+1] = infms;
    for(int i=1; i<=n1; i++)
    {
        left[i]=a[start+i-1];
    }
    for(int i=1; i<=n2; i++)
    {
        right[i]=a[mid+i];
    }
    int x=1,y=1;
    for(int k=start; k<=end; k++)
    {
        if(left[x]<=right[y])
        {
            a[k]=left[x];
            x++;
        }
        else
        {
            inversions += (1+n1-x);
            a[k]=right[y];
            y++;
        }
    }
}
void MergeSort(int a[],int start, int end)
{
    if( start<end )
    {
        int mid = (start+end)/2;
        MergeSort(a,start,mid);
        MergeSort(a,mid+1,end);
        Merge(a,start,mid,end);
    }
}
bool ispalindrome(string s)
{
    int n=s.length();
    if(n<=1)return true;
    if(n==2 && s[1]==s[0])return true;
    else if(n==2 && s[0]!=s[1])return false;
    if(s[0]==s[n-1])return ispalindrome(s.substr(1,n-2));
    else return false;
}


typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim)
{
    uniform_int_distribution<int> uid(0,lim-1);
    return uid(rang);
}

const int mod = 1'000'000'007;
const int N = 3e5;

vi v[N];
int a[N];

/** ========== YOUR CODE HERE ========= **/

void solution()
{
    ull i, j, k, n, m,a;

cin>>n>>m>>a;
unsigned long long value=ceil((double)m/a)*ceil((double)n/a);
cout<<value ;



}

/** ========== YOUR CODE HERE ========= **/

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    //int t = 1;
    // si(t);
    //while(t--) {
    solution();
return 0;
}

