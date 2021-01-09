#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,val,one=0,two=0,sm=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&val);
            if(val&1) one++;
            else two++;
            sm+=val;
        }
        if(sm&1) printf("NO\n");
        else if(two&1 and one<2) printf("NO\n");
        else printf("YES\n");
    }
}
