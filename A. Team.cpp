#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m[3];
    int sum,sum1,i;

    scanf("%d",&n);

    sum1=0;
    while(n--)
    {
        sum=0;
        for(i=0;i<3;i++)
        {
            scanf("%d",&m[i]);
            if(m[i]==1)
            {
                sum++;
            }
        }
        if(sum>=2)
        {
            sum1++;
        }

    }

    printf("%d\n",sum1);

    return 0;

}
