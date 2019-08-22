#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,o=0;
    cin>>t;
    while(t--)
    {
        o++;
        double l,n,c,ll;
        cin>>l>>n>>c;
        ll=(1.0+(n*c))*l;
        double r,lo,hi,mid,th,ss;
        lo=0.0;
        hi=l;

        for(int i=0;i<60;i++)
        {
            mid=(lo+hi)/2.0;

            r=((mid/2)+((l*l)/(8*mid)));
            th=(2.0*(asin((l/2.0)/r)));
            ss=r*th;

            if(ss>=ll)
            {
                hi=mid;
            }
            else{              lo=mid;}


        }
        printf("Case %d: %.10lf\n",o,lo);

    }
    return 0;
}
