//submit
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j,x,y,flag,sum,k,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        if(a==b)
        {
            flag = 0;
        }
        else if(b>a&&(b-a)%2==1)
        {
            flag = 1;
        }
        else if(b>a&&(b-a)%2==0)
        {
            flag = 2;
        }
        else if(b<a&&(a-b)%2==1)
        {
            flag = 2;
        }
        else{
            flag = 1;
        }

        printf("%d\n",flag);



    }








    return 0;
}
