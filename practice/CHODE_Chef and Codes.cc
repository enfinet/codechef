#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstring>

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

#define I	int
#define	F	float
#define	D	double
#define	L	long
#define	U	unsigned
#define	C	char
#define	B	bool
#define R	return
#define V	void

#define null            0
#define MOD             1000000007
#define read(f)         freopen(f, "r", stdin)
#define write(f)        freopen(f, "w", stdout)
#define clr(p)          memset(p, 0, sizeof(p))
#define ff              first
#define ss		second
#define pb(x)           push_back(x)
#define mp(a,b)		make_pair(a,b)
#define fori(i, val, n) for(I i = val; i < (I)(n); i++)
#define ford(i, val, n) for(I i = val; i > (I)(n); i--)

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

const double pi=acos(-1.0);
const double eps=1e-11;
const int INF = 0x3f3f3f3f;

inline V ifast(I &x)
{
	register I c = getchar_unlocked();
	x = 0;
	I neg = 0;
	for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());
	if(c=='-')
	{
		neg = 1;
		c = getchar_unlocked();
	}
	for(; c>47 && c<58 ; c = getchar_unlocked())
	{
		x = (x<<1) + (x<<3) + c - 48;
	}
	if(neg)
		x = -x;
}

V ofast(I n)     {
	if(n<0) {
		n=-n;
		putchar_unlocked('-');
	}
	I i=10;
	C output_buffer[10];
	do {
		output_buffer[--i]=(n%10)+'0';
		n/=10;
	}
	while(n);
	do {
		putchar_unlocked(output_buffer[i]);
	}
	while(++i<10);
}

const I mx=150005;

I main()
{
	I T;
	ifast(T);
	while (T--) {
		C a[30],b[mx];
		cin.getline(a,30);
		cin.getline(b,mx);
		vector< pair<I,I> >v;
		I cnt[30]= {0};
		I i=0;
		while(b[i]) {
			if(b[i]>='A' && b[i]<='Z')cnt[b[i]-'A']++;
			if(b[i]>='a' && b[i]<='z')cnt[b[i]-'a']++;
			i++;
		}
		fori(i,0,26)v.pb(mp(cnt[i],i));
		sort(v.begin(),v.end());
		C alpha[30];
		ford(i,25,-1) {
			if(v[i].ff) {
				alpha[v[i].ss]=a[i];
			}
		}
		i=0;
		while(b[i]) {
			if(b[i]>='A' && b[i]<='Z') {
				pc(alpha[b[i]-'A']+'A'-'a');
			} else if(b[i]>='a' && b[i]<='z') {
				pc(alpha[b[i]-'a']);
			} else pc(b[i]);
			i++;
		}
		nl;
	}
	R 0;
}
