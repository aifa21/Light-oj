#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,o=0;
    cin>>n;
    while(n--)
    {
        o++;

    double a,b,r,th,ac,x;
     scanf("%lf : %lf", &a, &b);
    r=sqrt((a*a)+(b*b))/2.0;
    th=acos(((r*r+r*r)-b*b)/(2.0*r*r));
    ac=r*th;
    x=(400/(2.0*a+2.0*ac));
     printf("Case %d: %.10lf %.10lf\n",o , x*a, x*b);

    }
    return 0;
}
