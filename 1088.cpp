#include<bits/stdc++.h>
using namespace std;
long long arr[100005];


int main()
{
    int t,n,q,c=0;
    cin>>t;
    while(t--)
    {   c++;
        scanf("%d %d",&n,&q);

        for(int i=0;i<n;i++)
           scanf("%lld",&arr[i]);

        printf("Case %d:\n",c);
        while(q--)
        {
            long long a,b,x,y,z;
           scanf("%lld %lld",&a,&b);
            x=lower_bound(arr,arr+n,a)-arr;
            y=upper_bound(arr,arr+n,b)-arr;

           z=y-x;
            printf("%lld\n",z);

        }
    }
    return 0;
}
