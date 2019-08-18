#include<bits/stdc++.h>
using namespace  std;

struct node
{
    node *next[11];
    bool endmark;
    node()
    {
        for(int i=0; i<10; i++)
            next[i]=NULL;

        endmark=false;

    }
};


void build_trie(string str,int len,node *curr)
{
    for(int i=0; i<len; i++)
    {
        int id=str[i]-'0';

        if(curr->next[id]==NULL)
            curr->next[id]=new node();

        curr=curr->next[id];
    }
    curr->endmark=true;
}

bool search_str(string str,int len,node *curr)
{
    for(int i=0; i<len; i++)
    {
        int id=str[i]-'0';

        if(curr->next[id]==NULL)
            return false;

        curr=curr->next[id];
    }

    if(curr->endmark)
    {
        for(int i=0; i<10; i++)
        {
            if(curr->next[i])
                return true;
        }
    }
    return false;
}

void delet(node *curr)
{
    for(int i=0; i<10; i++)
    {
        if(curr->next[i])
            delet(curr->next[i]);

    }
    delete(curr);
}



int main()
{
    int t,n,c=0;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        string s[10010];
        c++;
        node *root=new node();
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            build_trie(s[i],s[i].size(),root);
        }

        bool f=false;

        for(int i=0; i<n; i++)
        {
            bool  x=search_str(s[i],s[i].size(),root);
            if(x==true)
            {
                f=true;
                break;
            }
        }

        if(f==true)
            printf("Case %d: NO\n",c);

        else
            printf("Case %d: YES\n",c);

        delet(root);
    }
    return 0;
}

