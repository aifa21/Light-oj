
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll prefix[1000001];
void setPrefix (string s)
{
    int i = 0 ,j = -1;
    reverse(s.begin(),s.end());
    int len = s.length();
    prefix[0] = -1;
    while(i < len)
    {
        while( j >= 0 && s[i] != s[j])
        {
            j = prefix[j];

        }
        i++;
        j++;
        prefix[i] = j;
    }
}
int kmp_algorithm(string s )
{
    int n = s.length();
    string s1;
    s1=s;
    reverse(s1.begin(),s1.end());
    int m = s1.length();
   int i = 0 , j = 0;

   //setPrefix(s1);
   int c = 0;
   while(i < n)
   {
       while(j >= 0 and s[i] != s1[j])
       {
           j = prefix[j];
       }
       i++;
       j++;

   }
   return j;

}
int main()
{
   int cas,pp,o=0;
   cin>>cas;
   while(cas--){
    string s1;

cin>>s1;
    setPrefix(s1);
     pp=kmp_algorithm(s1);
cout<<"Case "<<o++<<": "<<2*s1.length()-pp<<endl;
   // cout<<x<< endl;
    }
}
