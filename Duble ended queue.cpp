#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int cas=1;
    while(n--)
    {
        cout<<"Case "<<cas++<<":"<<endl;
        int a,b,num;
        cin>>a>>b;
        string s;
        deque<int>q;
        while(b--)
        {
            cin>>s;
            if(s=="pushLeft"||s=="pushRight")
            {
                cin>>num;
                if(q.size()==a)
                {
                     cout<<"The queue is full"<<endl;

                }

                else{
                    if(s=="pushLeft")

                   {

                    q.push_front(num);
                    cout<<"Pushed in left: "<<num<<endl;
                   }
                  else if(s=="pushRight")
            {


                    //cin>>num;
                    q.push_back(num);
                    cout<<"Pushed in right: "<<num<<endl;

                }
            }



            }

           if(s=="popLeft"||s=="popRight")

            {
                if(q.empty())
                {
                     cout<<"The queue is empty"<<endl;

                }
                else{
                    if(s=="popLeft")
                    {
                        cout<<"Popped from left: "<<q.front()<<endl;
                    q.pop_front();
                    }
                    else  if(s=="popRight")

            {

                    cout<<"Popped from right: "<<q.back()<<endl;
                    q.pop_back();
                }
                }
            }



            }


        }


    return 0;
}
