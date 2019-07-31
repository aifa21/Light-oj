#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll mod= 1000003;
ll fact[1000006];
//we should output nCr % mod
ll mods (ll n , ll p , ll m)
{
    if(p == 0)
        return 1;
    if(p % 2 == 0)
    {
        ll ret = mods(n, p/2,m);
        return ((ret % m) * (ret % m)) % m;
    }
    else
        return ((n % m) * (mods(n ,p -1,m) % m) ) % m;
}
void factorial()
{
    fact[0] = 1;
    for(int i = 1; i <= 1000000; i++)
        fact[i] = ( fact[i -1] * i) % mod;
}
int main()
{
    //int m , n;
    int tes , o = 0;
    scanf("%d", &tes);
    factorial();
    while(tes--)
    {
        o++;
       ll n , r;
       scanf("%lld %lld" ,&n,&r);
       ll ans = ((fact[r] % mod) * (fact[n - r] % mod));
       ans = mods(ans , mod - 2, mod);
 printf("Case %d: %lld\n", o , (fact[n] * ans) %mod );
    }
}
