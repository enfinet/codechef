#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstring>
#include <ctime>

#include <iostream>
#include <fstream>
#include <sstream>
#include <istream>
#include <ostream>
#include <iomanip>

#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>

#include <bitset>
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
#include <utility>

using namespace std;

template< class T > T sq(T &x)
{
    return x * x;
}
template< class T > T abs(T &n)
{
    return (n < 0 ? -n : n);
}
template< class T > T max(T &a, T &b)
{
    return (!(a < b) ? a : b);
}
template< class T > T min(T &a, T &b)
{
    return (a < b ? a : b);
}
template< class T > T gcd(T a, T b)
{
    return (b != 0 ? gcd<T>(b, a%b) : a);
}
template< class T > T lcm(T a, T b)
{
    return (a / gcd<T>(a, b) * b);
}
template< class T > T mod(T &a, T &b)
{
    return (a < b ? a : a % b);
}

#define null            0
#define MOD             1000000007
#define read(f)         freopen(f, "r", stdin)
#define write(f)        freopen(f, "w", stdout)
#define clr(p)          memset(p, 0, sizeof(p))
#define ff              first
#define ss		        second
#define pb(x)           push_back(x)
#define fori(i, val, n) for(int i = val; i < (int)(n); i++)
#define ford(i, val, n) for(int i = val; i > (int)(n); i--)

#define s(a)		    scanf("%d",&a)
#define sc(a)		    scanf("%c",&a)
#define sl(a)		    scanf("%lld",&a)
#define sf(a)		    scanf("%f",&a)
#define sd(a)		    scanf("%lf",&a)
#define sst(a)		    scanf("%s",a)

#define p(a)		    printf("%d",a)
#define pc(a)		    printf("%c",a)
#define pl(a)		    printf("%lld",a)
#define pd(a)		    printf("%lf",a)
#define pst(a)		    printf("%s",a)

#define nl              printf("\n");
#define sp              printf(" ");

typedef long long ll;
const int INF = 0x3f3f3f3f;
const double PI = 3.1415926535897932384626433832795;

int main()
{
    /*int t;
    s(t);
    while(t--) {*/
        char str[1000005];
        sst(str);
        ll cnt=0ll;
        int len=strlen(str);
        if(len==1) {
            if((str[0]-'0')%8==0)cnt++;
        } else if(len==2) {
            if((str[0]-'0')%8==0)cnt++;
            if((str[1]-'0')%8==0)cnt++;
            int nm=(str[0]-'0')*10+(str[1]-'0');
            if(str[0]-'0' && !(nm%8))cnt++;
        } else {
            int mx=0;
            fori(i,0,len-2) {
                if((str[i]-'0')%8==0)cnt++;
                int nm=(str[i]-'0')*10+(str[i+1]-'0');
                if(str[i]-'0' && !(nm%8))cnt++;
                int num=(str[i]-'0')*100+(str[i+1]-'0')*10+(str[i+2]-'0');
                if(!(num%8)) {
                    if((str[i]-'0'))cnt++;
                    cnt+=(ll)(mx);
                }
                if((str[i]-'0'))mx++;
            }
            if((str[len-2]-'0')%8==0)cnt++;
            if((str[len-1]-'0')%8==0)cnt++;
            int nm=(str[len-2]-'0')*10+(str[len-1]-'0');
            if(str[len-2]-'0' && !(nm%8))cnt++;
        }
        pl(cnt);
        nl;
    //}
    return 0;
}
