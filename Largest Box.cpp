#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,o=0;
    cin>>n;

    while(n--)

    {
        o++;
       double l,w;
        cin>>l>>w;
        double x,as;
        x=((l+w)-sqrt((l*l)+(w*w)-(w*l)))/6.0;
        as=(x*(l-2*x)*(w-2*x));
        printf("Case %d: %lf\n",o,as);
    }
    return 0;
}
