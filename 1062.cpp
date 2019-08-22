#include <bits/stdc++.h>

using namespace std;
double x,y,c;
double fun(double mi)
{
    double h1,h2;
    h1=sqrt((x*x)-(mi*mi));
    h2=sqrt((y*y)-(mi*mi));

    return  (1.0/((h1*h2)/(h1+h2)));
}
int main()
{
    int o=0,n;
    cin>>n;
    while(n--)
    {  double x,y,c;
        scanf("%lf %lf %lf",&x,&y,&c);

        double lo=0.0,hi=max(x,y);

        for(int i=0;i<50;i++)
        {
            double mid=(lo+hi)/2;
            double h2=sqrt((y*y)-(mid*mid));
            double h1=sqrt((x*x)-(mid*mid));
            double temp_ans=(1.0/h1)+(1.0/h2);
            temp_ans=1.0/temp_ans;
            if(temp_ans>=c)
                lo=mid;
            else
                hi=mid;
        }

        printf("%.10lf\n",lo);



    }
    return 0;
}
