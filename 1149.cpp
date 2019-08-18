
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

//#define long long ll

using namespace std;


long long gcd(long a, long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
long long mods(long long n,long long p,long long m)
{if(p == 0)
        return 1;
    if(p % 2 == 0)
    {
        long long ret = mods(n, p/2,m);
        return ((ret % m) * (ret % m)) % m;
    }
    else
        return ((n % m) * (mods(n ,p -1,m) % m) ) % m;
}
long long modinverse(long long a,long long m)
{
       return mods(a,m-2,m);
}

int main()
{


    long long t,n,k,sum=0,i;

    cin>>t;
    int o=0;
    while(t--)
    {
        o++;
           cin>>n>>k;
           sum=0;
           for(i=1;i<=n;i++)
           {
                  sum+=mods(k,gcd(i,n),MOD);
                  sum%=MOD;
           }
           printf("Case %d: %ld\n",o,(sum*modinverse(n,MOD))%MOD);
    }

return 0;

}
